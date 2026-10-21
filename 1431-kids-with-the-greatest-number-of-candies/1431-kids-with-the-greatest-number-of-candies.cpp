class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = INT_MIN;
        for(int i = 0; i < candies.size(); i++){
            maxi = max(maxi, candies[i]);
        }
        vector<bool> ans(candies.size());
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] + extraCandies < maxi) 
                ans[i] = false;
            else{
                ans[i] = true;
            }
        }
        return ans;
    }
};