//target sum equals to subset

#include <bits/stdc++.h> 

int memoization(int i, vector<int>&num, int target, vector<vector<int>>&dp){
    
//     if(target==0) return 1;
    if(i==0){ 
        if(target==0 && num[0]==0) return 2;
        if(target==0 || target==num[0]) return 1;
        return 0;       
    }
    
    if(dp[i][target]!=-1) return dp[i][target];
    
    int notpick=memoization(i-1, num, target, dp);
    int pick=0;
    if(num[i]<=target) pick=memoization(i-1, num, target-num[i], dp);
    
    return dp[i][target]=notpick+pick;
}

int spaceoptimization(int n, vector<int>&num, int target){
    vector<int>prev(target+1,0);
    vector<int>curr(target+1,0);
    
    if(target>=num[0]) prev[num[0]]=1;
    if(num[0]==0) prev[0]=2;
    else prev[0]=1;
    
    for(int i=1; i<n ;i++){
        for(int tar=0; tar<=target; tar++){
            int notpick=prev[tar];
            int pick=0;
            if(num[i]<=tar) pick=prev[tar-num[i]];
            
            curr[tar]=notpick+pick;
        }
        prev=curr;
    }
    
    return prev[target];
}

int findWays(vector<int> &num, int tar)
{
    int n=num.size();
    vector<vector<int>> dp(n, vector<int>(tar+1,-1));
//      return memoization(n-1, num, tar, dp);
    return spaceoptimization(n, num, tar);
        
        //tabulation
//     if(tar>=num[0]) dp[0][num[0]]=1;
//     if(num[0]==0) dp[0][0]=2;
//     else dp[0][0]=1;
    
//     for(int i=1; i<n; i++){
//         for(int target=0; target<=tar; target++){
            
//         int notpick=dp[i-1][target];
//         int pick=0;
//         if(num[i]<=target) pick=dp[i-1][target-num[i]];
            
//         dp[i][target]=pick+notpick;    
//         }
//     }
//     return dp[n-1][tar];   
}