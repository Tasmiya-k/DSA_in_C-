//linked list  intro
//declaring, inserting, searching

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

void insertattail(node* &head, int val){     //taking head by reference
    node* n = new node(val);
    
    if(head==NULL){
        head=n;     //when we have no nodes in our linked list
        return;
    }
    
    node* temp=head;        //pointer        //taking head by value 
    while(temp->next!=NULL){
        temp=temp->next;
    }
    
    temp->next=n;
    
}

void insertathead(node* &head, int val){
    node* n=new node(val);
    n->next=head;                      //inserting at head
    head=n;
}

bool search(node* head, int key){
    
    node* temp=head;
   while(temp!=NULL){
       if(temp->data==key){
           return true;
       }
       temp=temp->next;
   }
   return false;
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
  node* head=NULL;
  insertattail(head,1);
  insertattail(head,2);
  insertattail(head,3);
  display(head);
  insertathead(head,4);
  display(head);
  cout<<search(head,5);

    return 0;
}
