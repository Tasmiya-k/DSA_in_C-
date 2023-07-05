//sum of all subarrays 
//Given an array[] of size n. output sum of each subarray of the given array
// approach *iterate over all the subarrays
//nested loop 
//for avery i=0 to i=n-1
//for every j=i to j=n-1 output sum []

#include <iostream>

using namespace std;

int main()
{
 int n;
 cin>>n;
 
 int arr[n];
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
 
 int current;
 int i;
 for(int i=0;i<n;i++)
 {
 current=0;
 for(int j=i;j<n;j++){
    current=current+arr[j];
    cout<<current<<" ";
 }
 }
    return 0;
}
