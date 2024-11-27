#include <iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,2,1};
    int count=0,i=0,j=5-1;
    for(int i=0;i<5/2;i++){
        if(arr[i] != arr[j]){
            count=1;
            break;
        }
        j--;
    }
    if(count==1){
        cout<<"not pallindrome";
    }
    else{
        cout<<"pallindrome";
    }

    return 0;
}
