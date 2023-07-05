//build BST from preorder

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


Node* ConstructBST(int preorder[], int *preorderIdx, int key, int min, int max, int n){
    
    if(*preorderIdx>=n){
        return NULL;
    }
    
    Node* root=NULL;
    
    if(key>min && key<max){
        root=new Node(key);
        *preorderIdx = *preorderIdx+1;
        
        if(*preorderIdx<n){
            root->left=ConstructBST(preorder, preorderIdx, preorder[*preorderIdx], min, key, n); //left subtree
        }
        if(*preorderIdx<n){
            root->right=ConstructBST(preorder, preorderIdx, preorder[*preorderIdx], key, max,n);    //right subtree
        }
    }
    
    return root;
    
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
    int preorder[]={10, 2, 1, 13, 11};
    int n=5;
    int preorderIdx=0;
    
    Node* root=ConstructBST(preorder, &preorderIdx, preorder[0], INT_MIN, INT_MAX, n );
    printPreorder(root);

    return 0;
}
