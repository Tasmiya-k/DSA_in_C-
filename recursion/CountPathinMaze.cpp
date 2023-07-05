//countPath in a maze of size nXn
//here we can only move down and right direction
#include <iostream>
#include<string.h>

using namespace std;

int countPathmaze(int i, int j, int n){
    if(i==n-1 && j==n-1){
        return 1;
    }
    else if(i>=n || j>=n) return 0;
    
    
    return countPathmaze(i+1, j, n)+ countPathmaze(i, j+1, n);
}


int main()
{
    int ans=countPathmaze(0, 0, 3);
    
    cout<<ans<<endl;


    return 0;
}
