class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxSum = nums[0];
        int minSum = nums[0];

        int maxAns = nums[0];
        int minAns = nums[0];
        
        int ans = nums[0];
        int sum = nums[0];

        for(int i = 1; i < nums.size(); i++){
            sum = sum + nums[i];

            maxSum = max(nums[i], maxSum + nums[i]);
            minSum = min(nums[i], minSum + nums[i]);

            maxAns = max(maxAns, maxSum);
            minAns = min(minAns, minSum);

            ans = max(ans, maxSum);
        }
        if(ans < 0)
            return ans;

        return max(ans, sum - minAns);
    }
};