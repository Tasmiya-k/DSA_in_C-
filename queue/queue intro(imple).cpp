//queue intro

#include <iostream>

using namespace std;

#define n 20

class queue{
    int* arr;
    int front;
    int back;
    
    public:
    queue(){
        arr=new int[n];
        front=-1;
        back=-1;
    }
    
    
    void push(int x){
        
        if(back==n-1){                    //koi jagah nahi hai
            cout<<"Queue overflow";
            return;
        }
        back++;
        arr[back]=x;
        
        if(front==-1){                   //sirf pehle case ke liye
            front++;
        }
    }
    
    
    void pop(){
        if(front==-1 || front>back){
            cout<<"No elements in a Queue";
            return ;
        }
        front++;
    }
    
    
    int  peek(){
        if(front==-1 || front>back){
            cout<<"No elements in a Queue";
            return -1;
        }
        return arr[front];
    }
    
    bool empty(){
        if(front==-1 || front>back){
           return true;
        }
        else{
            return false;
        }
        
    }
    
};

int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);            //1 2 3 4 
    
    cout<<q.peek()<<endl;
    q.pop();
    
    cout<<q.peek()<<endl;
    q.pop();
    
    cout<<q.peek()<<endl;
    q.pop();
    
    cout<<q.peek()<<endl;
    q.pop();
    
   cout<<q.empty()<<endl;

    return 0;
}
