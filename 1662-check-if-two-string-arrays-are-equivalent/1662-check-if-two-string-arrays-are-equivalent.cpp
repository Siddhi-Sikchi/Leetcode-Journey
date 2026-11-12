class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string sum1 = "";
        string sum2 = "";

        for(string c : word1){
            sum1 += c;
        }
        for(string c : word2){
            sum2 += c;
        }
        return sum1 == sum2;
    }
};