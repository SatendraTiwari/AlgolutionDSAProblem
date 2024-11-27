#include <iostream>
using namespace std;
int main()
{
    int arr[5]={3,6,1,5,2};
    
    int max=0;
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"The maximum element is "<<max<<"  in the array";

    return 0;
}