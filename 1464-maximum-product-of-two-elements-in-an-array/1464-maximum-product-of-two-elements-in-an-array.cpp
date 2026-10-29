class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i = 0; i < 2; i++){
            pq.push(nums[i]);
        }
        for(int i = 2; i < nums.size(); i++){
            if(nums[i] > pq.top()){
                pq.pop();
                pq.push(nums[i]);
            }
            continue;
        }
        int mx = pq.top();
        pq.pop();
        int secMx = pq.top();

        return (mx - 1) * (secMx - 1);
    }
};