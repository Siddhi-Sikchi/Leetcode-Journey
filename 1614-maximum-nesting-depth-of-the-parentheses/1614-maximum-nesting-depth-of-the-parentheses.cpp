class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int ans = 0;
        int cnt = 0;
        for(char c : s){
            if(c == '('){
                st.push(c);
                cnt++;
            }
            else if(c == ')'){
                st.pop();
                cnt--;
            }
            else{ continue; }
            ans = max(ans, cnt);
        }
        return ans;
    }
};