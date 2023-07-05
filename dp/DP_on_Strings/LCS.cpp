//Print LCS in two string

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  string s1="abcde";
  string s2="becdgek";
  int n=s1.length();
  int m=s2.length();
  vector<vector<int>>dp(n+1, vector<int>(m+1,-1));
  
  for(int i=0; i<=n; i++) dp[i][0]=0;
  for(int j=0; j<=m; j++) dp[0][j]=0;
  
  for(int i=1; i<=n; i++){
      for(int j=1; j<=m ;j++){
          //char of 2 string matches
          if(s1[i-1]==s2[j-1]) dp[i][j]=1+dp[i-1][j-1];
          //if char of 2 strings does not matches
          else 
          dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
      }
  }
  
  int l=dp[n][m];
  int idx=l-1;
  string s="";
  for(int i=0; i<=idx; i++) s+='$';
  int i=n, j=m;
  
  while(i>0 && j>0){
      
      if(s1[i-1]==s2[j-1]){
          s[idx]=s1[i-1];
          idx--;
          i--;
          j--;
      }
      
      else if(dp[i-1][j]>dp[i][j-1]) i=i-1;
      else j=j-1;
      
  }
  
  cout<<s;
}
