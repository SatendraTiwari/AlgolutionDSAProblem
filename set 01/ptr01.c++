#include <iostream>
using namespace std;
int main()
{
    int arr[6]={3,6,-3,-7,7,-1};
    
    int count=0;
    for(int i=0;i<6;i++){
        if(arr[i]<0){
            count+=1;
        }
    }
    cout<<"The negative element "<<count<<" times present in the array";

    return 0;
}