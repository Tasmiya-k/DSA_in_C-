//detect cycle
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

void makecyle(node* &head, int pos){  //pos=3
    node* temp=head;
    node* startnode;
    
    int count=1;
    while(temp->next!=NULL){
        if(count==pos){
            startnode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startnode;
}

void removecycle(node* &head){
    node* fast=head;
    node* slow=head;
    
    do{
      slow=slow->next;
      fast=fast->next->next;
    }while(slow!=fast);
    
    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}

bool detectcycle(node* &head){
    node* fast=head;
    node* slow=head;
    
    while(fast!=NULL  && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        
        if(slow==fast){
            return true;
        }
    }
    return false;
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
  makecyle(head,3);
  //display(head);
  cout<<detectcycle(head)<<endl;
  removecycle(head);
  //display(head);
  cout<<detectcycle(head)<<endl;
  display(head);
  
    return 0;
}
