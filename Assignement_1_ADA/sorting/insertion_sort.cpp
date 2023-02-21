/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void insertion(int arr[],int n){
    for(int i=1;i<n;i++){
        int value_to_sort=arr[i];
        
        while(arr[i-1]>value_to_sort && i>0){
            swap(arr[i],arr[i-1]);
            i--;
        }
    }
}


int main()
{
    int arr[10]={18,56,27,7,8,4,9,31,81,1};
    int n=10;
    
    insertion(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}