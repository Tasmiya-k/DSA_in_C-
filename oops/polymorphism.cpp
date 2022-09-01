//polymorphism 
//Complex numbers

#include <iostream>

using namespace std;
//virtual funtion

class base{
    public:
    virtual void print(){
        cout<<"this is the base class's print funtion "<<endl;
    }
    
    void display(){
        cout<<"this is the derived class's display funtion "<<endl;
    }
};


class derived : public base
{
  public:
  void print(){
        cout<<"this is the base class's print funtion "<<endl;
    }
    
    void display(){
        cout<<"this is the derived class's display funtion "<<endl;
    }
};
    

int main()
{
 base *baseptr;
 derived d;
 baseptr = &d;
 
 baseptr ->print();
 baseptr ->display();
  
    return 0;
}
