

#include <iostream>

using namespace std;

int main()
{
 int x,y;
 cout<<"enter 2 numbers";
 cin>>x>>y;
 
 if(x==y)
 {
     cout<<"both the numbers are equal";
 }
    else{
        if(x>y){
            cout<<"x is greater than y";
        }
        else{
            cout<<"y is greater than x";
        }
    }
 

    return 0;
}
