class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum = 0;
        int result = 0;
        unordered_map<int, int> m;
        m[0] = 1;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            int remainder = sum % k;
            if(remainder < 0)
                remainder += k;
            
            int freq = m[remainder];

            result += freq;          

            m[remainder]++;
        }
        return result;
    }
};