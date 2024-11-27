#include <iostream>
using namespace std;

void mergeSortedArray(int arr1[],int n,int arr2[],int m,int arr3[]){
    int k=0,i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    
    while(i<n){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    
    while(j<m){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
}
int main()
{
    int arr1[5]={3,5,6,8,9};
    int arr2[3]={2,4,7};
    int arr3[8]={0};
    
    mergeSortedArray(arr1,5,arr2,3,arr3);
    
    for(int i=0;i<8;i++){
        cout<<arr3[i]<<" ";
    }

    return 0;
}