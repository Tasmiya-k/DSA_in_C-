//swapping of 2 numbrs using functions

 
#include <iostream>

using namespace std;

  void swap(int a,int b){
      int t;
      t=a;
      a=b;
      b=t;
    
      cout<<"numbers after swapping "<<a<<" "<<b;
   return ;
  }
   
      
  int main()
    {
        int a,b;
        cout<<"enter 2 numbers ";
        cin>>a>>b;
        
       cout<<"numbers before swapping "<<a<<" "<<b<<endl;
       swap(a,b);
    
    return 0;
}
