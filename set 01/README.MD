
# Q1.Write a program to count total number of negative number in an array.

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

# Q2.Write a program that takes 5 integer as input from user and print max of all element.

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
# Q3.Write a program to merge two sorted arrays to third array.

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

# Q5.Write a program to find out the order of array is pallindrome or not.

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

# Q7.Write a program to fine all unique element in array.

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

# Q9.Write a program to find duplicate element in array.

#include<stdio.h>

int main(){
    int arr[7] = {1,2,2,3,3,1,1};
    int i,count=0,j = 0;
    int N = sizeof(arr)/sizeof(arr[0]);
    for(i = 0; i < N; i++){
        for(j = i+1; j < N; j++)
        {
        if(arr[i] == arr[j])
        {
            count++;
            
        }
        }
    }
    
    printf("%d",count);
}


# Q10.Write a program to print following pattern.
                     *****
                   *****
                *****
              *****
            *****
#include<iostream>
using namespace std;

int main(){
	int n=5;
	for(int i=0;i<n;++i){
		for(int j=0;j<n-i-1;++j){
			cout<<" ";
		}
		for(int k=0;k<n;++k){
		cout<<'*';	
		}
	cout<<endl;
	}
	
	
	return 0;
}

# Q11.Write a program to print following pattern.
	*
	**
	***
	****
	*****

#include <iostream>
using namespace std;

int main()
{
   int n=5;
   for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
           cout<<"*";
       }
       cout<<endl;
   }

    return 0;
}

# Q12.Write a program to print following pattern.
		*
		**
		***
		****
		*****
		****
		***
		**
		*
#include <iostream>
using namespace std;

int main()
{
   int n=5;
   for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
           cout<<"*";
       }
       cout<<endl;
   }
    for(int i=n-1;i>=1;i--){
       for(int j=1;j<=i;j++){
           cout<<"*";
       }
       cout<<endl;
   }
    return 0;
}
