/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;


struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node* LCA2(Node* root, int n1, int n2){
    
    if(root==NULL){
        return NULL;
    }
    
    if(root->data==n1 || root->data==n2){
        return root;
    }
    
    Node* rightLCA= LCA2(root->left, n1,n2);
    Node* leftLCA=  LCA2(root->right, n1,n2);
    
    if(rightLCA && leftLCA){
        return root;
    }
    
    if(leftLCA!=NULL){
        return leftLCA;
    }
    return rightLCA;
    
    
    
    
}

int main()
{
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->right->left=new Node(5);
    root->right->right=new Node(6);
    root->right->left->left=new Node(7);
    
    int n1=7;
    int n2=6;
    Node* lca = LCA2(root, n1, n2);
    
    if(lca==NULL){
        cout<<"LCA doesnt exist";
    }
    else{
        cout<<"LCA exists";
    }

    return 0;
}
