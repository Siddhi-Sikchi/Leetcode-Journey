class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum = 0;
        int res = 0;
        unordered_map<int, int> m;
        m[0] = 1;

        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            int que = sum - goal;

            int freq = m[que];

            res += freq;

            m[sum]++;
        }
        return res;
    }
};