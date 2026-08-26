class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        // int n = nums.size();
        // vector<int> prefix(n,0);
        // vector<int> suffix(n,0);

        // for(int i = 1; i < nums.size(); i++){
        //     prefix[i] = prefix[i - 1] + nums[i - 1];
        // }

        // for(int i = n - 2; i >= 0; i--){
        //     suffix[i] = suffix[i + 1] + nums[i + 1];
        // }

        // for(int i = 0; i < nums.size(); i++){
        //     if(prefix[i] == suffix[i]) return i;
        // }
        // return -1;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
        }
        int left = 0;
        for(int i = 0; i < nums.size(); i++){
            int right = sum - nums[i] - left;

            if(left == right) return i; 

            left += nums[i];
        }
        return -1;
    }
};