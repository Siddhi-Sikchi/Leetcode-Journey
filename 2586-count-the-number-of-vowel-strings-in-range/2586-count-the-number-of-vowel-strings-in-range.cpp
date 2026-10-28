class Solution {
public:
    bool isVowel(char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int cnt = 0;
        for(int i = left; i <= right; i++){
            if(isVowel(words[i][0]) && isVowel(words[i].back()))
                cnt++;
        }
        return cnt;
    }
};