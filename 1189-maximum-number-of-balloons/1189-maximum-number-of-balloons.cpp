class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string b = "balloon";
        unordered_map<char, int> f1;
        unordered_map<char, int> f2;

        for(char c : b){
            f1[c]++;
        }
        for(char c : text){
            f2[c]++;
        }

        int res = INT_MAX;
        for(auto i : f1){
            char key = i.first;
            int val1 = i.second;
            int val2 = f2[key];
            int times = val2 / val1;

            res = min(res, times);
        }
        return res;
    }
};