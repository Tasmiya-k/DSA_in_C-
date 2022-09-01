//Repeating element in an array

#include <iostream>
#include<climits>

using namespace std;

int main()
{
  int n;
  cin>>n;
  const int N=1e6+2;
  int idx[N];
  for(int i=0;i<N;i++){
      idx[i]=-1;
  }
  
  
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  
  int minidx=INT_MAX;
  
  for(int i=0;i<n;i++){
      
      if(idx[arr[i]]!=-1){
          minidx= min(minidx,idx[arr[i]]);
      }
      else{
         idx[arr[i]]=i;
      }
  }
  
      cout<<minidx+1;
      
    return 0;
}
