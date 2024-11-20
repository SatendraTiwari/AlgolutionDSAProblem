#include <iostream>
#include<vector>
using namespace std;

int validString(string s){
    int n = s.size();
    int t = 0;
    vector<int> opeStack;
    vector<int> closStack;
    for(int i = 0; i < n; i++){
        if('(' == s[i] || '{' == s[i] || '[' == s[i]){
            opeStack.push_back(s[i]);
        }else{
            closStack.push_back(s[i]);
        }
    }

    for(int i = 0; i < opeStack.size(); i++){
            if(opeStack[i] == '('){
                for(int j = 0; j < closStack.size(); j++){
                if(closStack[j] == ')'){
                     t = 1;
                     break;
                }else{
                    t = 0;
                }}
            }else if(opeStack[i] == '{'){
                for(int j = 0; j < closStack.size(); j++){
                if(closStack[j] == '}'){
                    t = 1;
                    break;
                }else{
                    t = 0;
                }}
            }else if(opeStack[i] == '['){
                for(int j = 0; j < closStack.size(); j++){
                if(closStack[j] == ']'){
                    t = 1;
                    break;
                }else{
                    t = 0;
                }}
            }
    }

    return t;

}


int main(){
    string a = "[]";
    int re = validString(a);

    if(re){
        cout<<"valid";
    }else{
        cout<<"invalid";
    }

    return 0;
}