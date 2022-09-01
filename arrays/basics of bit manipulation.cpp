//getbit and setbit
#include <iostream>

using namespace std;


int getbit(int n, int i){
    return ((n & (1<<i))!=0);
}

int setbit(int n,int i){
    return n | (1<<i);
}
int clearbit(int n,int i){
    int mask=~(1<<i);
    return (n & mask);
}
int updatebit(int n,int i,int value){
    int mask=~(1<<i);
    n=n&mask;
    return n|(value<<i);
}
int main()
{
    //cout<<getbit(5,2)<<endl; 
    //cout<<setbit(5,1)<<endl;
    // cout<<clearbit(5,2);
    cout<<updatebit(5,1,1);

    return 0;
}
