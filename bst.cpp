/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <queue>


using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};

Node* insert(Node* root,int data){
    if(root==NULL){
        return new Node(data);
    }
    else{
        Node* curr;
        if(data<=root->data){
            curr=insert(root->left,data);
            root->left=curr;
            
        }
        else{
            curr=insert(root->right,data);
            root->right=curr;
        }
    }
    return root;
    
}

void inorder(Node* root,vector<int> &arr){
    
    if(root==NULL){
        return;
    }
    
    inorder(root->left,arr);
    arr.push_back(root->data);
    inorder(root->right,arr);
    
    
}

void preorder(Node* root,vector<int> &arr){
    if(root==NULL){
        return;
    }
    arr.push_back(root->data);
    preorder(root->left,arr);
    preorder(root->right,arr);
}

void postorder(Node* root,vector<int> &arr){
    if(root==NULL){
        return;
    }
    postorder(root->left,arr);
    postorder(root->right,arr);
    arr.push_back(root->data);
}

void levelorder(Node*root){
    if(root==NULL){
        return;
    }
    
    queue<Node*> q;
    
    q.push(root);
    
    while(!q.empty()){
        Node* node=q.front();
        cout<<node->data<<" ";
        q.pop();
        
        if(node->left!=NULL){
            q.push(node->left);
        }
        if(node->right!=NULL){
            q.push(node->right);
        }
    }
    
}


int main()
{
    Node* root=NULL;
    
    root = insert(root, 8);
    root = insert(root, 3);
    root = insert(root, 1);
    root = insert(root, 6);
    root = insert(root, 7);
    root = insert(root, 10);
    root = insert(root, 14);
    root = insert(root, 4);
    vector<int> inorder_array;
    inorder(root,inorder_array);
    
    cout<<"Inorder Traversal"<<endl;
    for(int i=0;i<inorder_array.size();i++){
        cout<<inorder_array[i]<<" ";
        
    }
    
    cout<<endl;
    vector<int> preorder_array;
    preorder(root,preorder_array);
    
    cout<<"Preorder Traversal"<<endl;
    
    for(int i=0;i<preorder_array.size();i++){
        cout<<preorder_array[i]<<" ";
    }
    
    cout<<endl;
    
    vector<int> postorder_array;
    postorder(root,postorder_array);
    
    cout<<"Postorder Traversal"<<endl;
    
    for(int i=0;i<postorder_array.size();i++){
        cout<<postorder_array[i]<<" ";
    }
    
    cout<<endl;
    
    cout<<"Levelorder Traversal"<<endl;
    
    levelorder(root);
    
    
    

    return 0;
}
