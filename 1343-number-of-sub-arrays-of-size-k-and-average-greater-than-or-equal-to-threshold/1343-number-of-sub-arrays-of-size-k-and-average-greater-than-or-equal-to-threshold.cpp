class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int windowSum = 0;
        for(int i = 0; i < k; i++){
            windowSum += arr[i];
        }

        int sum = windowSum;
        int high = k;
        int low = 0;
        int cnt = 0;

        double avg = sum / k;

        if(avg >= threshold) cnt++;

        while(high < arr.size()){
            sum += arr[high];
            sum -= arr[low];

            avg = sum / k;

            if(avg >= threshold){
                cnt++;
            }
            high++;
            low++;
        }

        return cnt;
    }
};