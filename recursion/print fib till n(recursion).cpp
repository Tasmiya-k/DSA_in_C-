//print nth fibonacci number

#include <iostream>

using namespace std;

int fib(int n){
   if(n==0 || n==1){        //base conditions
       return n;
   }
    return fib(n-1)+fib(n-2);
}

int main()
{
    cout<<fib(5)<<endl;
    return 0;
}
