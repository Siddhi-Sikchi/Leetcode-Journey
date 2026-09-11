class Solution {
public:
    int lengthOfLastWord(string s) {
        int j = s.size() - 1;
        int cnt = 0;

        while(j >= 0 && s[j] == ' '){
            j--;
        }

        while(j >= 0 && s[j] != ' '){
            cnt++;
            j--;
        }

        return cnt;
    }
};