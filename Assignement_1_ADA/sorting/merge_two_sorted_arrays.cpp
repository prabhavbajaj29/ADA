/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void merge(int arr1[],int m,int arr2[],int n){
    int i=0;
    int j=0;
    
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
        }
        else{
            cout<<arr2[j]<<" ";
            j++;
        }
    }
    while(i<m){
        cout<<arr1[i]<<" ";
        i++;
    }
    while(j<n){
        cout<<arr2[j]<<" ";
        j++;
    }
}


int main()
{
    int arr1[]={7,8,18,27,56};
    
    int m=sizeof(arr1)/sizeof(arr1[0]);
    
    int arr2[]={1,4,9,31,81};
    
    int n=sizeof(arr2)/sizeof(arr2[0]);
    
    merge(arr1,m,arr2,n);

    return 0;
}