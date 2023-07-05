//check if BST

#include <iostream>
#include <math.h>
#include <climits>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    
    Node(int val){
        data=val;
        Node* left=NULL;
        Node* right=NULL;
    }
};


bool isBST(Node* root, Node* min=NULL, Node* max=NULL){
    
    if(root==NULL){
        return true;
    }
    
    if(min!=NULL && min->data>root->data){
        return false;
    }
    if(max!=NULL && max->data<root->data){
        return false;
    }
    
    bool validLeft=isBST(root->left, min, root);
    bool validRight=isBST(root->right, root, max);
    
    return validLeft and validRight;
    
}



void printPreorder(Node* root){
    
    if(root==NULL){
        return ;
    }
    
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
    
    return;
    
}


int main()
{
    Node* root=new Node(5);
    root->left=new Node(2);
    root->right=new Node(8);
    
    if(isBST(root, NULL, NULL)){
        cout<<"It is BST";
    }
    else{
        cout<<"Not BST";
    }

    return 0;
}
