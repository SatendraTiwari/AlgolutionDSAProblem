#include <iostream>
using namespace std;
int main()
{
    int arr[5]={2,2,3,5,2};
    
    for(int i=0;i<5;i++){
        int count = 0;
        for(int j=0;j<5;j++){
            if(arr[j]==arr[i]){
                count++;
            }
        }
        if(count==1){
            cout<<arr[i];
        }
    }

    return 0;
}