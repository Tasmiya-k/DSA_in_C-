

#include <iostream>

using namespace std;

int main()
{
 int x,y,max,min;
 cout<<"enter 2 numbers ";
 cin>>x>>y;
 if(x>y){
 min=y;
 max=x;
 }
 else{
     max=y;
     min=x;
 }
cout<<"max "<<max<<endl;
cout<<"min "<<min<<endl;

 

    return 0;
}
