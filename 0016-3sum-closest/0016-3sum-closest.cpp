class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int mxDiff = INT_MAX;
        int resultSum = 0;
        for(int i = 0; i < nums.size()-2; i++){
            int j = i+1; 
            int k = nums.size() - 1;

            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                int diff = abs(sum - target);

                if(mxDiff > diff){
                    mxDiff = diff;
                    resultSum = sum;
                }
                if(sum == target){
                    resultSum = sum;
                    j++;
                    k--;
                }
                else if(sum < target){
                    j++;
                }else{
                    k--;
                }
            }
        }
        return resultSum;
    }
};