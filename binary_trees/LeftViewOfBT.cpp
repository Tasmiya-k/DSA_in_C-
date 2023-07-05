//Left view of Tree


#include <iostream>
#include <queue>

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


void Left_view(Node* root){
    if(root==NULL){
        return;
    }
    
    queue <Node*>q;
    q.push(root);
    
    while(!q.empty()){
        
    int n=q.size();
    for(int i=0;i<n;i++){
        
        Node* curr=q.front();
        if(i==0){
        cout<<curr->data<<" ";
        }
        q.pop();
        
        if(curr->left!=NULL){
        q.push(curr->left);
    }
    
    if(curr->right!=NULL){
        q.push(curr->right);
     }
    }
    

    }
    
}

int main()
{
    Node* root=new Node(5);
    root->left=new Node(3);
    root->right=new Node(6);
    root->left->left=new Node(2);
    root->left->right=new Node(4);
    
    Left_view(root);
    

    return 0;
}
