class Solution {
public:
    double average(vector<int>& salary) {
        double cnt = 0;
        int minSal = INT_MAX;
        int maxSal = INT_MIN;
        double sum = 0;
        for(int x : salary){
            cnt++;
            minSal = min(minSal, x);
            maxSal = max(maxSal, x);
            sum += x;
        }
        return (sum - minSal - maxSal)/(cnt - 2);
    }
};