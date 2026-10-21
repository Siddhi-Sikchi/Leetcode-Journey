class Solution {
public:
    char findTheDifference(string s, string t) {
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());

        // for(int i = 0; i < s.size(); i++){
        //     if(s[i] != t[i]) return t[i];
        // }
        // return t[t.size() - 1];

        char a = 0;
        for(char x : s){
            a = a ^ x;
        }
        for(char x : t){
            a = a ^ x;
        }
        return a;
    }
};