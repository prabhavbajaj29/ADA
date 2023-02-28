/******************************************************************************

Binary search searches in O(logn) time
*******************************************************************************/
#include <iostream>

using namespace std;

int binary_search(int arr[],int n,int element){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    
    
    while(start<=end){
        if(arr[mid]==element){
            return mid;
        }
        else if(arr[mid]>element){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}



int main()
{
    int arr[11]={1, 4, 7, 7, 8, 9, 18, 27, 31, 56, 81};
    
    cout<<binary_search(arr,11,8)<<endl;

    return 0;
}
