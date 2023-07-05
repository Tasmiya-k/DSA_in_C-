class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, pair<int, int>>> maxhp;

        for(auto it: points){
        int dist = it[0]*it[0] + it[1]*it[1];
        maxhp.push({dist, {it[0], it[1]}});

        if(maxhp.size()>k){
        maxhp.pop();
        }

        }

        vector<vector<int>> ans;
        while(!maxhp.empty()){
        ans.push_back({maxhp.top().second.first, maxhp.top().second.second});
        maxhp.pop();
        }

        return ans; 


        
    }
};