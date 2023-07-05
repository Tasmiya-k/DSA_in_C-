//Find Kth largest element in array


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>>minheap;

        for(int i=0; i<nums.size(); i++){
            if(minheap.size()>=k){
                if(nums[i]>minheap.top()){
                    minheap.pop();
                    minheap.push(nums[i]);
                }
            }
            else{
                minheap.push(nums[i]);
            }
        }
        return minheap.top();
    }
};