class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int j = 0;
        while(j < n){
            for(int i = j; i < 2*n; i+=n){
                ans.push_back(nums[i]);
            }
            j++;
        }
        return ans;
    }
};