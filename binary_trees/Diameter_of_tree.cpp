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


int calcDiameter(Node* root, int* height){
    
    if(root==NULL){
        *height=0;
        return 0;
    }
    
    int lh=0,rh=0;
    
    int ldiamere=calcDiameter(root->left, &lh);
    int rdiameter=calcDiameter(root->right, &rh);
    
    int currdia=rh+lh+1;
    *height=max(lh,rh)+1;
    
    return max(currdia, max(ldiamere,rdiameter));
    
}

int main()
{
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    
    int height=0;
    
    int ans=calcDiameter(root,&height);
    cout<<ans;
    

    return 0;
}
