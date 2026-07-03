class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minCnt = INT_MAX;
        int sum = 0;
        int left = 0;
        int cnt = 0;

        for(int right = 0; right < nums.size(); right++){
            sum += nums[right];

            while(sum >= target){
                cnt = right - left + 1;
                minCnt = min(minCnt, cnt);
                sum -= nums[left];
                left++;
            }
        }
        return (minCnt == INT_MAX) ? 0: minCnt;
    }
};