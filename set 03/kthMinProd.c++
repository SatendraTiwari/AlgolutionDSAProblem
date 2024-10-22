#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int kthMinProd(vector<int> nums, int k){

    int n = nums.size();

    int prod,min_prod = INT8_MAX;
    sort(nums.begin(), nums.end());
    prod = 1;
    for(int i = 0; i < k; i++){
        prod *= nums[i];
    }

    return prod;
}


int main(){
    vector<int> nums = {198,76,544,123,154,675};
    int k = 2;
    int res = kthMinProd(nums,k);
    cout<<res;
    return 0;
}