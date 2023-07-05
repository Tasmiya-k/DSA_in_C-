//fibonacci using memoization

#include <iostream>
#include <vector>

using namespace std;

int fibo(int n, vector<int>&dp){
    if(n<=1) return n;
    
    if(dp[n]!=0) return dp[n];
    
    return dp[n]=fibo(n-1, dp)+fibo(n-2, dp);
}

int main()
{   
    cout<<"Enter nth fib term: ";
    int n;
    cin>>n;
    vector<int>dp(n+1,0);
    int ans= fibo(n, dp);
    cout<<ans;
    
}
