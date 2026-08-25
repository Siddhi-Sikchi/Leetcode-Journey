class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxEnd = nums[0];
        int minEnd = nums[0];

        int maxSum = nums[0];
        int minSum = nums[0];

        for(int i = 1; i < nums.size(); i++){
            maxEnd = max(maxEnd + nums[i], nums[i]);
            minEnd = min(minEnd + nums[i], nums[i]);

            maxSum = max(maxEnd, maxSum);
            minSum = min(minEnd, minSum);
        }
        return max(maxSum, abs(minSum));
    }
};