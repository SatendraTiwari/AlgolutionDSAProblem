#include <iostream>
#include <vector>
#include <deque>
using namespace std;


vector<int> maxNumInSub(vector<int>& num, int k){
    int N = num.size();
    int j,i = 0;
    vector<int> ans;
   while(j != N){
        int max = num[i];
        for(j = i; j < i+k; j++){
            if(max < num[j]){
                max = num[j];
            }
        }
        ans.push_back(max);
        i++;
    }


    return ans;
       
}


int main(){ 
    vector<int> num = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13};
    int k = 4;
    vector<int> rum = maxNumInSub(num,k);
    for(int val : rum){
        cout<<"Value is"<<val<<endl;
    }
    return 0;
}