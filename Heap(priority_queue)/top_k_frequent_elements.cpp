//Input: nums = [1,1,1,2,2,3], k = 2
//Output: [1,2]

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int, int> mp;
        priority_queue<pair<int, int>, 
        vector<pair<int, int>>, 
        greater<pair<int, int>>> minhp;

        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }

        for(auto it: mp){
            minhp.push({it.second, it.first});
            if(minhp.size()>k) minhp.pop();
        }

        while(!minhp.empty()){
            ans.push_back(minhp.top().second);
            minhp.pop();
        }
        return ans;

    }
};