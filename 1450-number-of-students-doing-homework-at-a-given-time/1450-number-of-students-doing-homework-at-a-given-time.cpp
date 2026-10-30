class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int i = 0;
        int ans = 0;
        while(i < startTime.size()){
            if(queryTime >= startTime[i] && queryTime <= endTime[i])
                ans++;
            i++;
        }
        return ans;
    }
};