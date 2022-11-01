/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

bool isIdentical(node* root1, node* root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    
    else if(root1==NULL || root2==NULL){
        return false;
    }
    
    else{
        bool cond1=root1->data==root2->data;
        bool cond2=isIdentical(root1->left,root2->left);
        bool cond3=isIdentical(root1->right, root2->right);
        
        if(cond1 && cond2 && cond3){
        return true;
        }
       return false;
        }
    
    
    
}

int main()
{
    /*
    
    */
    node* root1=new node(1);
    root1->left=new node(2);
    root1->right=new node(3);
    
    node* root2=new node(1);
    root2->left=new node(1);
    root2->right=new node(3);
    
    if(isIdentical(root1,root2)){
      cout<<"Both trees are identical";
    }
    else{
        cout<<"Both trees are not identical";
    }
    return 0;
}
