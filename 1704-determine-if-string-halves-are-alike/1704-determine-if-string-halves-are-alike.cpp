class Solution {
public:
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            return true;
        return false;
    }
    bool halvesAreAlike(string s) {
        int st = 0; int end = s.size() - 1;
        int mid = st + (end - st)/2;
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i = 0; i <= mid; i++){
            if(isVowel(s[i])) cnt1++;
        }
        for(int i = mid + 1; i < s.size(); i++){
            if(isVowel(s[i])) cnt2++;
        }
        return cnt1 == cnt2;
    }
};