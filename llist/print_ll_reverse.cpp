/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct node{
    node* next;
    int data;
    
    node(int val){
        data=val;
        next=NULL;
    }
};

void fun1(node* head){
    if(head==NULL){
        return ;
    }
    fun1(head->next);
    cout<<head->data<<" ";
}
int main()
{
    node* n=new node(1);
    n->next=new node(2);
    n->next->next=new node(3);
    n->next->next->next=new node(4);
    fun1(n);

    return 0;
}
