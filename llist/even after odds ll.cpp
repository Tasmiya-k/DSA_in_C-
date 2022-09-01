//even after odds

#include <iostream>

using namespace std;

class node{
    public: 
    int data;
    node* next;
    
     node(int value){
        data=value;
        next=NULL;
    }
};

void insertattail(node* &head, int value){
    node* n=new node(value);
    node* temp=head;
    
    if(head==NULL){
        head=n;
        return;
    }
    
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void evenafterodd(node* &head){
    node* odd=head;
    node* even=head->next;
    node* evenstart=even;
    
    while(odd->next!=NULL && even->next!=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    
    odd->next=evenstart;
    if(odd->next==NULL){
        even->next=NULL;
    }
}

void display(node* head){
    node* temp=head;
    
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


int main()
{
  node* head;
  head=NULL;
  insertattail(head,1);
  insertattail(head,2);
  insertattail(head,3);
  insertattail(head,4);
  insertattail(head,5);
  insertattail(head,6);
  display(head);
  evenafterodd(head);
  display(head);

    return 0;
}
