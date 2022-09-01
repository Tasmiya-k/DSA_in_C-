/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
// #include <math.h>
#include <climits>

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

int calcHeight(Node* root){
    
    if(root==NULL){
        return -1;
    }
    
    int leftheight=calcHeight(root->left);
    int rightheight=calcHeight(root->right);
    
    return max(leftheight,rightheight)+1;
    
}

int main()
{
    Node* root= new Node(1);
   root->left=new Node(2);
    root->right=new Node(3);
    
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    
    root->right->left=new Node(6);
    root->right->right=new Node(7);
   
   
   cout<<calcHeight(root);

    return 0;
}
