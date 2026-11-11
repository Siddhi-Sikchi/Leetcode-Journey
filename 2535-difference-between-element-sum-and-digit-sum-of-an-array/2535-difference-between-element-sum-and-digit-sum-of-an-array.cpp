class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int digSum = 0; 
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            if(nums[i] < 10)
                digSum += nums[i];
            else{
                while(nums[i] > 0){
                    int remain = nums[i] % 10;
                    nums[i] /= 10;
                    digSum += remain;
                }
            }
        }
        return sum - digSum;
    }
};