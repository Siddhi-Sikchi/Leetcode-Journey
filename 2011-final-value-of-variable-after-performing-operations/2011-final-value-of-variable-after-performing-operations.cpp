class Solution {
public:
    int finalValueAfterOperations(vector<string>& op) {
        int ans = 0;
        for(string c : op){
            if(c == "--X" || c == "X--"){
                --ans;
            }
            else{
                ans++;
            }
        }
        return ans;
    }
};