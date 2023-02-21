/******************************************************************************

find median of two sorted arrays

*******************************************************************************/
#include <iostream>

using namespace std;

double median(int arr[],int n){
    if(n%2==0){
        return (arr[n/2-1]+arr[n/2])/2;
    }
    else{
        return arr[n/2];
    }
}

double getMedian(int arr1[],int arr2[],int n){
    
    
    
    if(n==0)return 0;
    if(n==1){
        return double((arr1[0]+arr2[0])/2);
    }
    
    int m1=median(arr1,n);
    int m2=median(arr2,n);
    
    if(m1==m2)return m1;
    if(m2>m1)return getMedian(arr1+n/2,arr2,n-n/2);
    else return getMedian(arr1,arr2+n/2,n-n/2);
}


int main()
{
    int arr1[3]={1,8,10};
    int arr2[3]={2,7,9};
    
    cout<<getMedian(arr1,arr2,3)<<endl;

    return 0;
}