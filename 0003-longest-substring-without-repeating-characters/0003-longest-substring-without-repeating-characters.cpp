class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low = 0;
        int res = 0;

        unordered_map<char, int> m;

        for(int high = 0; high < s.size(); high++){
            m[s[high]]++;
            while(m[s[high]] > 1){
                m[s[low]]--;
                if(m[s[low]] == 0){
                    m.erase(s[low]);
                }
                low++;
            }
            int len = high - low + 1;
            res = max(res, len);
        }
        return res;
    }
};