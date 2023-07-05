//Find Kth smallest element in a matrix / array

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {

        priority_queue<int> maxhp;       
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                maxhp.push(matrix[i][j]);

                if(maxhp.size()>k){
                    maxhp.pop();
                }
            }
        }
        int ans = maxhp.top();
        return ans;
    }
};