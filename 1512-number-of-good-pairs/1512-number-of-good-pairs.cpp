class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        int count = 0;
        unordered_map<int,int> mp;
        for(int x : nums){
            mp[x]++;
        }
        for(auto i : mp){
            int freq = i.second;
            count += freq*(freq - 1)/2;
        }
        return count;
    }
};