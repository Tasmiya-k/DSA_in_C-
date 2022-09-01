//min and max in array

#include <iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    
    int maxno=INT_MIN;
    int minno=INT_MAX;
    
    for(int i=0;i<n;i++){
        if(array[i]>maxno){
            maxno=arr[i];
        }
        
        if(array[i]<minno){
            minno=arr[i];
        }
    }
    
    return 0;
}
