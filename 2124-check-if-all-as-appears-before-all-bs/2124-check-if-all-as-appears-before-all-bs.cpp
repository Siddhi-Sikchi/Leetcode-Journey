class Solution {
public:
    bool checkString(string s) {
        stack<char>st;
        for(int i = 0; i < s.size() - 1; i++){
            st.push(s[i]);
            if(st.top() == 'b' && s[i + 1] == 'a')
                return false;
        }
        return true;
    }
};