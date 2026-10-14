struct cmp{
    bool operator()(pair<int, int>&a, pair<int, int>&b){
        if(a.first != b.first)
            return a.first > b.first;
        return a.second > b.second;
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // unordered_map<int, int> f;

        // for(int i : nums){
        //     f[i]++;
        // }

        // vector<int> res;

        // while(k > 0){
        //     int key = 0;
        //     int maxFreq = 0;

        //     for(auto i : f){
        //         if(i.second > maxFreq){
        //             maxFreq = i.second;
        //             key = i.first;
        //         }
        //     }
        //     res.push_back(key);
        //     f[key] = 0;
        //     k--;
        // }
        // return res;

        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;

        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto i : mp){
            int val = i.first;
            int freq = i.second;
            pair<int, int> curr = {freq, val};

            if(pq.size() < k){
                pq.push(curr);
                continue;
            }else{
                if(pq.top().first > curr.first)
                    continue;
                pq.pop();
                pq.push(curr);
            }
        }
        vector<int> res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};