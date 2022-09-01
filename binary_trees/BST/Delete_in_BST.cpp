// delete in BST

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


Node* inorderSucc(Node* root){
    Node* curr=root;
    while(curr && curr->left!=NULL){
        curr=curr->left;
    }
    return curr;
}

Node* deleteBST(Node* root, int val){
    

    
    if(val<root->data){
        root->left= deleteBST(root->left, val);
    }
    
    else if(val>root->data){
        root->right= deleteBST(root->right, val);         //if val>root->data
    }
    
    else{                 //when root->data==val/key to delete (Case 1 and Case 2 are handelled here)
        
        if(root->left==NULL){
            Node* temp=root->left;
            free(root);
            return temp;
        }
        
        else if(root->right==NULL){
            Node* temp=root->right;
            free(root);
            return temp;
        }
        
        //case 3
        Node* temp= inorderSucc(root->right);
        root->data=temp->data;
        root->right=deleteBST(root->right,temp->data);
        
    }
    return root;
    
}



void inorder(Node* root){
    if(root==NULL){
        return;
    }
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}

int main()
{
    Node* root=new Node(4);
    root->left=new Node(2);
    root->right=new Node(5);
    root->left->left=new Node(1);
    root->left->right=new Node(3);
    root->right->right=new Node(6);
    
    inorder(root);
    root=deleteBST(root,5);
    cout<<endl;
    inorder(root);
    

    return 0;
}
