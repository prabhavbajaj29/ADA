/******************************************************************************

time complexity--> O(n) where n is the exponent
space complexity--> O(1)

*******************************************************************************/
#include <iostream>

using namespace std;

int power(int a,int b){
    //a is the base
    //b is the exponent
    
    if(b==0){
        return 0;
    }
    if(b==1){
        return a;
    }
    
    return a*power(a,b-1);
}


int main()
{
    int a,b;
    cout<<"Enter the first number(base): "<<endl;
    cin>>a;
    cout<<"Enter the second number(exponent): "<<endl;
    cin>>b;
    
    cout<<power(a,b)<<endl;
    

    return 0;
}