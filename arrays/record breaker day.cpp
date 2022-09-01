//record breaker day
//case 1:the day is strictly greater than all the previous day.
//case 2:the day is greater than following values.

#include <iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
  
  int a[n+1];
  a[n]=-1;
  
  for(int i=0;i<n;i++){
      cin>>a[i];
     
  }
  
  if(n==1){
      cout<<"1"<<endl;
      return 0;
  }
    int ans=0;
    int mx=-1;
    
    for(int i=0;i<n;i++){
    if(a[i]>mx && a[i]>a[i+1]){
        ans++;
    }
    mx=max(mx,a[i]);
    }
    cout<<ans <<" ";
    return 0;
}
