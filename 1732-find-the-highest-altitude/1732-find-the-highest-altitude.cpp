class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>arr(gain.size() + 1);
        arr[0] = 0;
        for(int i = 0; i < arr.size() - 1; i++){
            arr[i + 1] = arr[i] + gain[i]; 
        }
        int maxi = INT_MIN;
        for(int i = 0; i < arr.size(); i++){
            maxi = max(maxi, arr[i]);
        }
        return maxi;
    }
};