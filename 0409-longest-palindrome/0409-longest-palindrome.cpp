class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> f;
        for(char c : s){
            f[c]++;
        }

        int ans = 0;
        bool hasOdd = false;

        for(auto i : f){
            char key = i.first;
            int val = i.second;
            if(val % 2 == 0){
                ans += val;
            }else{
                ans += val - 1;
                hasOdd = true;
            }
        }
        if(hasOdd){
            ans++;
        }
        return ans;
    }
};