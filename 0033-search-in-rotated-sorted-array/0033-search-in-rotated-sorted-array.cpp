class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0; 
        int end = nums.size() - 1;

        while(st < end){
            int mid = st + (end - st)/2;

            if(nums[mid] > nums[end]){
                st = mid + 1;
            }else{
                end = mid;
            }
        }
        int min = st;

        if(target >= nums[min] && target <= nums[nums.size() - 1]){
            st = min;
            end = nums.size() - 1;
        }else{
            st = 0;
            end = min - 1;
        }

        while(st <= end){
            int mid = st + (end - st)/2;
            if(target < nums[mid]){
                end = mid - 1;
            }else if(target == nums[mid]){
                return mid;
            }else{
                st = mid + 1;
            }
        }
        return -1;
    }
};