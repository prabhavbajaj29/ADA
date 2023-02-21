/******************************************************************************

linear search

*******************************************************************************/
#include <iostream>

using namespace std;

bool linearSearch(int arr[],int element,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            return true;
        }
    }
    return false;
}



int main()
{
    int arr[11]={1, 4, 7, 7, 8, 9, 18, 27, 31, 56, 81};
    
    cout<<linearSearch(arr,7,11)<<endl;

    return 0;
}