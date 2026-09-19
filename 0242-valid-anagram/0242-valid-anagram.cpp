class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());

        // if(s == t) return true;
        // return false;

        unordered_map<char, int> f1;
        unordered_map<char, int> f2;

        for(char c : s){
            f1[c]++;
        }
        for(char c : t){
            f2[c]++;
        }
        for(auto i : f1){
            char key1 = i.first;
            int value = i.second;
            int key2 = f2[key1];
            if(value != key2){
                return false;
            }
        }
        return true;
    }
};