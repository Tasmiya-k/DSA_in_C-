//print all subarrays

#include <iostream>
#include <vector>

using namespace std;

void helper(int i, vector<int> &arr, vector<int>&ans){
    
    if(i>=arr.size()){
        for(int i=0; i<ans.size(); i++) cout<<ans[i]<<" ";
        cout<<endl;
        return;
    }
    
    
    //picking element at ith position
    ans.push_back(arr[i]);
    helper(i+1, arr, ans);
    //not picking
    ans.pop_back();
    helper(i+1, arr, ans);
}

int main()
{   
    int n;
    int i;
    cout<<"Enter the size of array";
    cin>>n;
     vector<int>ans;
     vector<int> arr;
    while(cin>>i && i!=-1){
        arr.push_back(i);
    }
    
    
    
    helper(0, arr, ans);

    return 0;
}
