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

void print(node* head){
    if(head==NULL){
        return;
    }
    node* ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" -> ";
        ptr=ptr->next;
    }
    cout<<"NULL";
    cout<<endl;
}

void pos(node* head){
    if(head==NULL){
        return;
    }
    node* ptr=head;
    while(ptr!=NULL){
        if(ptr->data>0){
            cout<<ptr->data<<" -> ";
        }
        ptr=ptr->next;
    }
    cout<<"NULL";
    cout<<endl;
}

void neg(node* head){
    if(head==NULL){
        return;
    }
    node* ptr=head;
    while(ptr!=NULL){
        if(ptr->data<0){
            cout<<ptr->data<<" -> ";
        }
        ptr=ptr->next;
    }
    cout<<"NULL";
    cout<<endl;
}

int main()
{
   node* n=new node(1);
   n->next=new node(-2);
   n->next->next=new node(3);
   n->next->next->next=new node(-6);
   n->next->next->next->next=new node(4);
   
   cout<<"Before operation the list is"<<endl;
   print(n);
   cout<<"The positive linked list is"<<endl;
   pos(n);
   cout<<"The negetive linked list is"<<endl;
   neg(n);

    return 0;
}
