class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // int i = 0;
        // int j = 1;

        // while(j < nums.size()){
        //     if(nums[i] != nums[j]){
        //         j++;
        //     }
        //     i++;

        //     if(abs(j - i) <= k)
        //         return true;
        // }
        // return false;

        unordered_map<int, int> m;

        for(int i = 0; i < nums.size(); i++){
            if(m.find(nums[i]) != m.end()){
                int diff = i - m[nums[i]];

                if(diff <= k)
                    return true;
            }
            
            m[nums[i]] = i;

        }
        return false;
    }
};