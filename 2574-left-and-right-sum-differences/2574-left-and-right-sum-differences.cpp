class Solution {
public:
    int mod(int x){
        if(x < 0)
            return -x;
        return x;
    }
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> preSum(nums.size());
        vector<int> sufSum(nums.size());
        vector<int> ans(nums.size());
        int sum = 0;

        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
        }
        preSum[0] = 0;
        for(int i = 1; i < nums.size(); i++){
            preSum[i] = preSum[i - 1] + nums[i - 1];
        }

        for(int i = 0; i < nums.size(); i++){
            sufSum[i] = sum - preSum[i] - nums[i];
        }

        for(int i = 0; i < nums.size(); i++){
            ans[i] = mod(preSum[i] - sufSum[i]);
        }
        return ans;
    }
};