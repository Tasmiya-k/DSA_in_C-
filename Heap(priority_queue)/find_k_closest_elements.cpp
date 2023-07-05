
//find k closest elements
//Input: arr = [1,2,3,4,5], k = 4, x = 3
//Output: [1,2,3,4]


class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> minhp;      //max heap
        vector<int>ans;

        for(int i=0; i<arr.size(); i++){

           int diff = abs(arr[i]-x);  
           minhp.push({diff, arr[i]});
           if(minhp.size()>k){
               if(minhp.top().first>diff){
                   minhp.pop();
               }
               else minhp.pop();
           } 
        }

        while(!minhp.empty()){
            ans.push_back(minhp.top().second);
            minhp.pop();
        }
        sort(ans.begin(), ans.end());
        return ans;
    
    }
};