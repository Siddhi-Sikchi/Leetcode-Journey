class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int left = 0; 
        int right = height.size() - 1;

        while(left < right){
            int ht = min(height[left], height[right]);
            int wt = right - left;

            int area = ht * wt;

            maxWater = max(maxWater, area);

            if(height[left] <= height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxWater;
    }
};