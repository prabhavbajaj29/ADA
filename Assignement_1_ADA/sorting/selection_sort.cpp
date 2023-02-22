/******************************************************************************

selection sort
*******************************************************************************/
#include <iostream>

using namespace std;

void selection(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;

        if(min_idx!=i)
            swap(arr[min_idx], arr[i]);
    }
}


int main()
{
    int arr[]={5,4,3,2,1};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    selection(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}