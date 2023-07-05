
//0 1 knapsack
#include <bits/stdc++.h>


int morespaceOptimization(vector<int>&weight, vector<int>&value, int maxWeight,int n){
    
    vector<int>prev(maxWeight+1, 0);
    
    for(int i=0; i<=maxWeight; i++){
        if(weight[0]<=i) prev[i]=value[0];
        }
    
    for(int i=1; i<n; i++){
        for(int j=maxWeight; j>=0 ; j--){
      
            int nottake=prev[j];
            int take=INT_MIN;
            if(weight[i]<=j){
                take=value[i]+prev[j-weight[i]];
            }
            
            prev[j]=max(take,nottake);
        }
    }
    return prev[maxWeight];
}



int spaceOptimization(vector<int>&weight, vector<int>&value, int maxWeight,int n){
    
    vector<int>prev(maxWeight+1, 0);
    vector<int>curr(maxWeight+1, 0);
    
    for(int i=0; i<=maxWeight; i++){
        if(weight[0]<=i) prev[i]=value[0];
        }
    
    for(int i=1; i<n; i++){
        for(int j=0; j<=maxWeight; j++){
      
            int nottake=prev[j];
            int take=INT_MIN;
            if(weight[i]<=j){
                take=value[i]+prev[j-weight[i]];
            }
            
            curr[j]=max(take,nottake);
        }
        prev=curr;
    }
    return prev[maxWeight];
}

int tabulation(vector<int>&weight, vector<int>&value, int maxWeight, vector<vector<int>>&dp, int n){
    
    for(int i=0; i<=maxWeight; i++){
        if(weight[0]<=i) dp[0][i]=value[0];
        }
    
    for(int i=1; i<n; i++){
        for(int j=0; j<=maxWeight; j++){
      
            int nottake=dp[i-1][j];
            int take=INT_MIN;
            if(weight[i]<=j){
                take=value[i]+dp[i-1][j-weight[i]];
            }
            
            dp[i][j]=max(take,nottake);
        }
    }
    return dp[n-1][maxWeight];
}

int helper(vector<int>&weight, vector<int>&value, int i, int W, vector<vector<int>>&dp){
    if(i==0){
        if(weight[i]<=W) return value[i];
        else return 0;
    }
    
    if(dp[i][W]!=-1) return dp[i][W];
    
    int notpick=helper(weight, value, i-1, W, dp);
    int pick=INT_MIN;
    if(weight[i]<=W) pick=value[i]+helper(weight, value, i-1, W-weight[i], dp);
    
    return dp[i][W]=max(pick, notpick);
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{ 
//     vector<vector<int>>dp(n, vector<int>(maxWeight+1,0));
// 	return helper(weight, value, n-1, maxWeight, dp); 
//     return tabulation(weight, value, maxWeight, dp, n);
    return morespaceOptimization(weight, value, maxWeight, n);
    
}