class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int mx = INT_MIN;
        for(int i = 0; i < piles.size(); i++){
            mx = max(mx, piles[i]);
        }

        int low = 1;
        int high = mx;

        int k = -1;

        while(low <= high){
            int mid = low + (high - low)/2;
            long long eatingHours = 0;
            for(int i = 0; i < piles.size(); i++){
                eatingHours = eatingHours + piles[i]/mid;
                if(piles[i] % mid != 0){
                    eatingHours++;
                }
            }
            if(eatingHours <= h){
                k = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return k;
    }
};