#include <iostream>
#include<cmath>
using namespace std;

bool isSquareFree(int num) {
    
    for (int i = 2; i * i <= num; ++i) {
        
        if (num % (i * i) == 0) {
            return false;  
        }
    }
    return true; 
}

int squreFreeNum(int num){
    int i,n = num;
    int count = 0;
    for(i = 1; i <= sqrt(n); i++ ){        
        if(n%i == 0){
            int sqr = sqrt(i);
            if(i != 1 && isSquareFree(i)){
                count++;
            }
            int otherDiv = n/i;
            if(i != otherDiv && isSquareFree(otherDiv) ){
                count++;
            }

            
        }
    }

    return count;
}


int main(){

    int num;
    cout<<"The only line of the input is a single integer N which is divisible by no prime number larger than 19"<<endl;
    cin>>num;
    if(num <= 19){
        cout<<"One line containing an integer that gives the number of square free numbers (not including 1)";
        return 0;
    }else{
        int result = squreFreeNum(num);
        cout<<"perfect square : "<<result;
    }
    return 0;
}