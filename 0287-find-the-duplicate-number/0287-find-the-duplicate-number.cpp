class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        // sort(nums.begin(), nums.end());

        // for(int i = 0; i < nums.size(); i++){
        //     if(nums[i] == nums[i+1]) return nums[i];
        // }
        // return -1;

        //slow fast pointer approach

        int slow = 0;
        int fast = 0;

        while(true){
            slow = nums[slow];
            fast = nums[nums[fast]];

            if(slow == fast){
                break;
            }
        }
        slow = 0;
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};