// check if the array is sorted or not using recursion

#include <iostream>

using namespace std;

bool sorted(int arr[], int n){

if(n==1){
    return true;         //base condition
}


bool restarray=sorted(arr+1,n-1);
return (arr[0]<arr[1] && restarray);
}

int main()
{
   int arr[]={1,2,7,4,5};
   cout<<sorted(arr,5);

    return 0;
}
