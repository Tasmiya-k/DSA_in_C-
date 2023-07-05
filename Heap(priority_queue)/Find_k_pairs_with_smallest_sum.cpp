//Input: nums1 = [1,7,11], nums2 = [2,4,6], k = 3
//Output: [[1,2],[1,4],[1,6]]
//Explanation: The first 3 pairs are returned from the sequence: 
//[1,2],[1,4],[1,6],[7,2],[7,4],[11,2],[7,6],[11,4],[11,6]

class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {

        //max heap
        priority_queue<pair<int, pair<int, int>>> pq;
        
        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size(); j++){
                int sum = nums1[i]+nums2[j];

                //we havent got k elements yet
                if(pq.size()<k) pq.push({sum, {nums1[i], nums2[j]}});
                
     //if current pair sum is smaller than top of pq replace it with current pair
                else if(sum<pq.top().first){
                    pq.pop();
                    pq.push({sum, {nums1[i], nums2[j]}});
                }
                else{
//there is no point going to further elements of nums2 as there sum will be surely greater than all the element in pq
                    break;
                }
            }
        }
        vector<vector<int>>ans;
        while(!pq.empty()){
            ans.push_back({pq.top().second.first, pq.top().second.second});
            pq.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};