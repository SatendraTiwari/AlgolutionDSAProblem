#include <iostream>
using namespace std;

void validString(string s){
    int n = s.size();
    cout<<n;
    for(int i = 0; i < n; i++){
        for(int j = i; j <= n; j++){
            if(s[i] == s[j]){
                cout<<"true";
            }
        }
    }
}


int main(){
    string a = "(){}[]";
    validString(a);

    return 0;
}