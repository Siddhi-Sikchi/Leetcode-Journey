class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int high = 0;
        long long int sum = 0;

        for(int low = 0; low < arr.size(); low++){
           int subSum = 0;
           for(int high = low; high < arr.size(); high++){
                subSum += arr[high];
               if((high - low + 1) % 2 != 0){
                    sum += subSum;
               }
           }
        }
        return sum;
    }
};