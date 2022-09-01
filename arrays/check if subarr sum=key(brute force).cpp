//check if subarry sum==given key

#include <iostream>
#include<climits>

using namespace std;

int main()
{
  int n, key;
  cin>>n>>key;
  
  int sum=0;
  int max=INT_MIN;
  
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  
  for(int i=0;i<n;i++){
      for(int j=i;j<n;j++){
          for(int k=i;k<=j;k++)
            {
              sum=sum+arr[k];
              }
              if(sum==key){
                  cout<<i<<" "<<j;
              }
              else{
                  sum=0;
                  }
      }
  }

    return 0;
}
