//reverse a linked list

#include <iostream>

using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int val){
        data=val;
        next=NULL;
    }
};

void insertattail(node* &head, int val){
    node* n=new node(val);
    
    if(head==NULL){
       head=n;
       return;
    }
    
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

node* reverse(node* &head){
    node* prevptr=NULL;    //3 pointer banaenge 
    node* currptr=head;
    node* nextptr;
    
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;    //link change karenge 
        
        prevptr=currptr;              //pointer ko aage badaenge 
        currptr=nextptr;
    }
    return prevptr;       //ye hamara new head hai
}

node* reverseRecursive(node* &head){
    
    if(head==NULL || head->next==NULL){    //base case
        return head;
    }
    
    node* newhead=reverseRecursive(head->next);
        head->next->next=head;
        head->next=  NULL;
        return newhead;
    
}

int main()
{
    node* head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    display(head);
    node* newhead=reverseRecursive(head);
    display(newhead);

    return 0;
}
