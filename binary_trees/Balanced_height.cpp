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


int height(Node* root){
    if(root==NULL){
        return 0;
    }
    
    int lh=height(root->left);
    int rh=height(root->right);
    
    return max(lh,rh)+1;
    
}

bool Balanced_height(Node* root){
    
    if(root==NULL){
        return true;
    }
    
    if(Balanced_height(root->left)==false){
        return false;
    }
    if(Balanced_height(root->right)==false){
        return false;
    }
    
    int lh=height(root->left);
    int rh=height(root->right);
    
    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }
    
    
}



int main()
{
    Node* root=new Node(1);
   root->left=new Node(2);
//   root->right=new Node(3);
//   root->left->left=new Node(4);
//   root->left->right=new Node(5);
   root->left->left=new Node(7);
   
   
   if(Balanced_height(root)){
       cout<<"Balanced Tree";
   }
   else{
       cout<<"UnBalance Tree";
   }

    return 0;
}
