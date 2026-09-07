class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 == 0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        int i = 0;
        int k = 0;
        int j = even.size();

        vector<int> ans(nums.size());
        while(i < even.size()){
            ans[i] = even[i];
            i++;
        }

        while(j < ans.size()){
            ans[j] = odd[k];
            k++;
            j++;
        }
        return ans;
    }
};