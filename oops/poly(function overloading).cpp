//polymorphism 

#include <iostream>

using namespace std;
//function overloading

class apnacollege{
public:
      void func(){
          cout<<"function with no argument"<<endl;
      }
      
      void func(int x){
          cout<<"function with int argument"<<endl;
      }
      void func(double x){
          cout<<"function with double argument"<<endl;
      }
};


int main()
{
  apnacollege obj;
  obj.func();
  obj.func(4);
  obj.func(6.8);
  
    return 0;
}
