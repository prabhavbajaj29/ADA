/******************************************************************************

Reverse stack using recursion
*******************************************************************************/
#include <iostream>
#include <stack>

using namespace std;


void insert_at_bottom(stack<int> &st,int element){
    
    if(st.empty()){
        st.push(element);
        return;
    }
    
    int num=st.top();
    st.pop();
    insert_at_bottom(st,element);
    st.push(num);
}

void reverse(stack<int> &st){
    
    if(st.empty())return;
    
    int num=st.top();
    st.pop();
    reverse(st);
    insert_at_bottom(st,num);
    
}

int main()
{
    
    
    stack<int> st1,st2;
    st1.push(1);
    st1.push(2);
    st1.push(3);
    st1.push(4);
    
    
    st2=st1;
    
    cout<<"Before reversing the stack"<<endl;
    
    while(!st2.empty()){
        cout<<st2.top()<<" ";
        st2.pop();
    }
    
    cout<<endl;
    
    reverse(st1);
    
    cout<<"After reversing the stack"<<endl;
    
    while(!st1.empty()){
        cout<<st1.top()<<" ";
        st1.pop();
    }
    
    

    return 0;
}