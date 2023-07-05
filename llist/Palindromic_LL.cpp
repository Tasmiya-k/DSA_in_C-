//Palindromic Link list

#include <iostream>
#include <stack>

using namespace std;

class ListNode {
    public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

void insertattail(ListNode* head, int val){     //taking head by reference
    ListNode* n = new ListNode(val);
    
    if(head==nullptr){
        head=n;     //when we have no nodes in our linked list
        return;
    }
    
    ListNode* temp=head;        //pointer        //taking head by value 
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    
    temp->next=n;
    
}

void isPalindrome(ListNode* head) {
       stack<int> st;
       ListNode* slow=head;
       ListNode* fast=head;
       
       
           while(fast!=nullptr && fast->next!=nullptr){
               st.push(slow->val);
               slow=slow->next;
               fast=fast->next->next;
           }
           
           cout<<st.top()<<" ";
       
        while(!st.empty() && slow->next!=nullptr){
            if(st.top()!=slow->val){
                cout<<"Not Palindrome"<<" ";
            }
            slow=slow->next;
        }
        
        cout<<"Palindrome";
        
        
    }

int main()
{
    ListNode* head=NULL;
    insertattail(head,8);
    insertattail(head,0);
    insertattail(head,2);
    insertattail(head,1);
    
    isPalindrome(head);

    return 0;
}
