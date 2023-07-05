//addition of 2 numbrs using functions

 
#include <iostream>

using namespace std;

   int sum(int a,int b){
       int addition=a+b;
      return addition;
   }
   
      
  int main()
    {
        int a,b;
        cout<<"enter 2 numbers:";
        cin>>a>>b;
        
        cout<<"sum of numbers is="<<sum(a,b)<<endl;
    
     
    return 0;
}
