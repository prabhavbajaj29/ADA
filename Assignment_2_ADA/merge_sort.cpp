/******************************************************************************

Merge Sort

*******************************************************************************/
#include <iostream>

using namespace std;

void merge(int *arr,int low,int high,int mid){
    int i=low;
    int j=mid+1;
    int k=0;
    
    int temp[high-low+1];
    
    while(i<mid+1 &&j<high+1){
        
        if(arr[i]<arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
        }
    }
    
    while(i<mid+1){
        temp[k++]=arr[i++];
    }
    
    while(j<high+1){
        temp[k++]=arr[j++];
    }
    
    for(int i=low;i<high+1;i++){
        arr[i]=temp[i-low];
    }
    
}

void mergesort(int *arr,int low,int high){
    int mid;
    if(low<high){
        mid=low+(high-low)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        
        merge(arr,low,high,mid);
    }
}


int main()
{
    int arr[7]={27,17,02,13,19,07,18};
    int n=7;
    
    mergesort(arr,0,n-1);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}