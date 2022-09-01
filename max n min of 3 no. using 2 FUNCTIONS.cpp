//max and minimum of 3 numbers using 2 functions


#include <iostream>

using namespace std;


int max(int n1,int n2,int n3){
    int max;
if(n1>n2){
    if(n1>n3){
        max=n1;
    }
    else{
        max=n3;
    }
} 

else{
    if(n2>n3){
        max=n2;
    }
    else{
        max=n3;
    }
}
return max ;
}

int min(int n1,int n2,int n3){
    int min;
    if(n1<n2){
        if(n1<n3){
            min=n1;
        }
        else{
            min=n3;
        }
    }
    else{
        if(n2<n3){
           min=n2;
        }
        else{
            min=n3;
        }
    }
    return min;
}


int main()
{
 int n1,n2,n3;
 cin>>n1>>n2>>n3;
 
 cout<<"max of 3 numbers= "<<max(n1,n2,n3)<<endl;
 
 cout<<"min of 3 numbers= "<<min(n1,n2,n3)<<endl;
    return 0;
}
