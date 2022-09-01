//queue using stack  2(using function call stack)

#include <iostream>
#include<stack>

using namespace std;

class Queue{
    stack<int> s1;
    stack<int> s2;
    
public:
     void push(int x){
         s1.push(x);
     }
     
     int pop(){
         if(s1.empty()){
             cout<<"queue is empty";
             return -1;
         }
         int x=s1.top();
         s1.pop();
         if(s1.empty()){
             return x;
         }
         
         
         int item=pop();
         s1.push(x);
         return item;
         
         
     }
     
     
     
     bool empty(){
         if(s1.empty() and s2.empty()){
             return true;
         }
         else{
             return false;
         }
     }
};

int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.pop()<<endl;
    q.push(5);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    q.empty();

    return 0;
}
