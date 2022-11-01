/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stack>
#include <math.h>

using namespace std;

struct node{
    struct node* right;
    struct node* left;
    int data;
    
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void ZigzagTraversal(node* root){
    if(root==NULL){
        return;
    }
    
    stack<node*> nextLevel;
    stack<node*> currentLevel;
    bool LeftToRight=true;
    
    currentLevel.push(root);
    
    while(!currentLevel.empty()){
        node* temp=currentLevel.top();
        currentLevel.pop();
        
        if(temp){
            cout<<temp->data<<" ";
            
            if(LeftToRight){
                if(temp->left){
                    nextLevel.push(temp->left);
                }
                if(temp->right){
                    nextLevel.push(temp->right);
                }
            }
            //for Right To Left
            else{
                if(temp->right){
                    nextLevel.push(temp->right);
                }
                if(temp->left){
                    nextLevel.push(temp->left);
                }
            }
            
        }
            if(currentLevel.empty()){
                LeftToRight=!LeftToRight;
                swap(currentLevel,nextLevel);
            }
        
    }
    
}

int main(){
    
    
    node* root=new node(12);
    root->left=new node(9);
    root->right=new node(15);
    root->left->right=new node(10);
    root->left->left=new node(5);
    
    ZigzagTraversal(root);
    
    return 0;
}