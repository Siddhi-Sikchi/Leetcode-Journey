class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minCnt = INT_MAX;
        int sum = 0;
        int low = 0;
        int high = 0;
        int cnt = 0;
        
        while(high < nums.size()){
            sum += nums[high];

            while(sum >= target){
                cnt = high - low + 1;
                minCnt = min(minCnt, cnt);
                sum -= nums[low];
                low++;
            }
            high++;
        }
        return minCnt == INT_MAX ? 0 : minCnt;
    }
    
};