//even odd using functions

 
#include <iostream>

using namespace std;


    int evenodd(int n){
        if(n%2==0){
            cout<<"even";
            
        }
        else{
     cout<< "odd";
        }
        return 0;
    }
      
  int main()
    {
    int n,result ;
    cin>>n;
      
     evenodd(n);
     
    return 0;
}
