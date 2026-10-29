class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int>dig(nums.size());
        for(int i = 0; i < nums.size(); i++){
            int sum = 0;
            while(nums[i] > 0){
                int remain = nums[i] % 10;
                sum += remain;
                nums[i] /= 10;
            }
            dig[i] = sum;
        }
        int minNum = INT_MAX;
        for(int x : dig){
            minNum = min(minNum, x);
        }
        return minNum;
    }
};