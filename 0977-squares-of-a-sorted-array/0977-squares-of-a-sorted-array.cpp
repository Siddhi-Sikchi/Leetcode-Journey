class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        vector<int> ans(nums.size());
        int high = ans.size() - 1;

        while(left <= right){
            if(nums[left] * nums[left] < nums[right] * nums[right]){
                ans[high] = nums[right] * nums[right];
                right--;
            }else{
                ans[high] = nums[left] * nums[left];
                left++;
            }
            high--;
        }
        return ans;
    }
};