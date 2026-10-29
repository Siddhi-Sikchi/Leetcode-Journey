class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int i = 0;
        int ans = 0;
        while(i < nums1.size()){
            int j = 0;
            while(j < nums2.size()){
                if(nums1[i] % (nums2[j] * k) == 0)
                    ans++;
                j++;
            }
            i++;
        }
        return ans;
    }
};