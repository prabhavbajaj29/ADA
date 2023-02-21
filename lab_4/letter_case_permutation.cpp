/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

void permute(int index,string s,vector<string> &ans){
    
    if(index==s.length()){
        ans.push_back(s);
        return;
    }
    
    if(!((s[index]>='a' and s[index]<='z')or(s[index]>='A' and s[index]<='Z'))){
        
        permute(index+1,s,ans);
        return;
    }
    
    s[index]=toupper(s[index]);
    permute(index+1,s,ans);
    
    s[index]=tolower(s[index]);
    
    permute(index+1,s,ans);
}

int main()
{
    vector<string> ans;
    string s="a1b";
    
    permute(0,s,ans);
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }cout<<endl;

    return 0;
}