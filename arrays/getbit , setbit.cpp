//getbit and setbit
#include <iostream>

using namespace std;


int getbit(int n, int i){
    return ((n & (1<<i))!=0);
}

int setbit(int n,int i){
    return n | (1<<i);
}
int main()
{
    cout<<getbit(5,2)<<endl;
    cout<<setbit(5,1)<<endl;


    return 0;
}
