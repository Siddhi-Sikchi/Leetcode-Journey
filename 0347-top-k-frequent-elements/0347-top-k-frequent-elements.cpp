class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> f;

        for(int i : nums){
            f[i]++;
        }

        vector<int> res;

        while(k > 0){
            int key = 0;
            int maxFreq = 0;

            for(auto i : f){
                if(i.second > maxFreq){
                    maxFreq = i.second;
                    key = i.first;
                }
            }
            res.push_back(key);
            f[key] = 0;
            k--;
        }
        return res;
    }
};