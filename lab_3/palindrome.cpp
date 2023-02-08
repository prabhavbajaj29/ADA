/******************************************************************************

time complexity--> O(n) where n is the length of the string
space complexity--> O(1)

*******************************************************************************/
#include <iostream>

using namespace std;



bool isPalindrome(string s){
    int start=0;
    int end=s.length()-1;
    
    while(start<=end){
        if(s[start++]!=s[end--]){
            return false;
        }
    }
    return true;
}


int main()
{
    string s;
    cin>>s;
    
    if(isPalindrome(s)){
        cout<<"Yes it is a Palindrome"<<endl;
    }
    else{
        cout<<"No it is not a Palindrome"<<endl;
    }


    return 0;
}