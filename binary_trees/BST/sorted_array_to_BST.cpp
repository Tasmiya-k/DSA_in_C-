///build Balanced BST from sorted array */

#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};

Node* SortedArrayToBST(int arr[], int start, int end){
    
    if(start>end){
        return NULL;
    }
    
    int mid=(start+end)/2;
    Node* root=new Node(arr[mid]);
    
    root->left=SortedArrayToBST(arr, start, mid-1);
    root->right=SortedArrayToBST(arr, mid+1, end);
    
    return root;
    
}

void printpreorder(Node* root){
    if(root==NULL){
        return;
    }
    
    cout<<root->data<<" ";
    printpreorder(root->left);
    printpreorder(root->right);
}

int main()
{
    int arr[]={10, 20, 30, 40, 50};
    Node* root=SortedArrayToBST(arr, 0, 4);
    printpreorder(root);

    return 0;
}
