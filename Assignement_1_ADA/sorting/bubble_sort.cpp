/******************************************************************************

Bubble Sort code in C++

*******************************************************************************/
#include <iostream>

using namespace std;

void bubble(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main()
{
    int arr[10]={18,56,27,7,8,4,9,31,81,1};
    int n=10;
    
    bubble(arr,10);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    int comparisions=n*(n-1)/2;
    
    cout<<"The total number of comparisions in bubble sort is "<<comparisions<<endl;

    return 0;
}