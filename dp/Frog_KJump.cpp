//frogKJump


#include <bits/stdc++.h>
using namespace std;
 
//tabulation
int frogKJumpTabu(int n, int k, vector<int>&heights){
vector<int>dp(n,-1);
    dp[0]=0;
	
	for(int i=0; i<n; i++){
	    int minSteps=INT_MAX;
	    int jump=0;
	    for(int j=1; j<=k; j++){
	        if(i-j>=0)
	        jump=dp[i-j]+abs(heights[i]-heights[i-j]);
	        
	        minSteps=min(jump,minSteps);
	    }
	    dp[i]=minSteps;
	}
    return dp[n-1];

}

 //memoization code
int frogKJumpMemo(int i, int k, vector<int>&heights, vector<int>&dp){
  if(i==0) return 0;
  int minSteps=INT_MAX;
  if(dp[i]!=-1) return dp[i];
  for(int j=1; j<=k; j++){
      int jump = INT_MAX;
    if(i-j>=0)
     jump=frogKJump(i-j,k,heights,dp)+abs(heights[i]-heights[i-j]);
     
     minSteps=min(minSteps, jump);  
  }
  return dp[i]=minSteps;
}


//recursive code
int frogKJump(int i, int k, vector<int>&heights){
  if(i==0) return 0;
  int minSteps=INT_MAX;
  for(int j=1; j<=k; j++){
      int jump = INT_MAX;
    if(i-j>=0)
     jump=frogKJump(i-j,k,heights)+abs(heights[i]-heights[i-j]);
    minSteps=min(minSteps, jump);  
    
  }
  return minSteps;
}
 
int main(){
int n,k;
	cin>>n>>k;
    vector<int> heights(n);
    for(int i=0;i<n;i++){
        cin>>heights[i];
    }
   vector<int>dp(n,-1);
	cout << frogKJump(2-1, 100, heights);
// 	cout << endl<<endl;
// 	heights = {10, 50, 10};
// 	cout << frogKJump(3, 2, heights);
}
 

