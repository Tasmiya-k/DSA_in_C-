//DNF short
#include <iostream>

using namespace std;

void swap(int arr[], int i, int j){
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void dnfsort(int arr[], int n){
    int mid=0;
    int high=n-1;
    int low=0;
    
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr,low,mid);
            low++; mid++;
        }
        
        else if(arr[mid]==1){
           mid++; 
        }
        
        else{
            swap(arr,mid,high);
            high--;
        }
        
    }
    
    
}

int main()
{
    int arr[]={1,1,2,0,0,1,2,1};
    dnfsort(arr,8);
    
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
