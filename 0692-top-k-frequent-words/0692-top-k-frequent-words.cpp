struct cmp{
    bool operator()(pair<int, string>&a, pair<int, string>&b){
        if(a.first != b.first)
            return a.first > b.first;
        return a.second <  b.second;
    }
};
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        priority_queue<pair<int, string>, vector<pair<int, string>>, cmp>pq;

        unordered_map<string, int>mp;

        for(int i = 0; i < words.size(); i++){
            mp[words[i]]++;
        }
        for(auto i : mp){
            pq.push({i.second, i.first});
            if(pq.size() > k){
                pq.pop();
            }
        }
        vector<string> res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};