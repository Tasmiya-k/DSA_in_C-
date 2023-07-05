
//Given an array of n elements, where each element is at most k away from its target position, you need to sort the array optimally.


#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int num, int K){
        vector<int>ans;
        priority_queue<int, vector<int>, greater<int>> minheap;
        
        for(int i=0; i<num; i++){
            minheap.push(arr[i]);
            if(minheap.size()>K){
                ans.push_back(minheap.top());
                minheap.pop();
            }
        }
        
        while(!minheap.empty()){
            ans.push_back(minheap.top());
            minheap.pop();
        }
        return ans;
    }
};

