

#include <iostream>
#include <math.h>
#include <climits>


using namespace std;

int getAvg(int nums[6], int m){
        int n=6;
        int a=0, b=0;
        int c=n-m-1;
        for(int i=0;i<m+1;i++){
            a=nums[i]+a;
        }
        a=a/(m+1);
        
        if(c!=0){
        for(int i=m+1; i<n; i++){
            b=nums[i]+b;
        }
        b=b/c;
        }
        else b=0;
       
        
        return abs(b-a);
        
    }
    
  void minimumAverageDifference(int nums[6]) {
        int ia=0;
        int avg=0;
        int n=6;
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            int avgd=getAvg(nums, i);
            cout<<"avg at"<<avgd<<endl;
            if(avgd<ans){
            ia=i;
            cout<<ia<<endl;
            ans=min(avgd,ans);
            
            }
        }
       cout<<ia;
    }

int main()
{
    int nums[6]={2,5,3,9,5,3};
    minimumAverageDifference(nums);

    return 0;
}
