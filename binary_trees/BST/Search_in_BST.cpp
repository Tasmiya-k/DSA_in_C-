// search in BST

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

Node* search(Node* root, int key){
    
    if(root==NULL){
        return NULL;
    }
    
    if(root->data==key){
        return root;
    }
    
    // data>key
    if(root->data>key){
        return search(root->left, key);
    }
    
    // data<key
    return search(root->right, key);
    
}

int main()
{
    Node* root= new Node(4);
    root->left=new Node(2);
    root->right =new Node(5);
    root->left->left=new Node(1);
    root->left->right=new Node(3);
    root->right->right=new Node(6);
    
    if(search(root,18)==NULL){
        cout<<" key does not exists";
    }else{
        cout<<"key exists";
    }

    return 0;
}
