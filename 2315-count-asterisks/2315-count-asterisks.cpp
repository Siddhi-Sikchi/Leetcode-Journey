class Solution {
public:
    int countAsterisks(string s) {
        stack<char> st;
        int cnt = 0;
        for(char c : s){
            if(c == '|')
                st.push(c);
            if(st.size() == 2){
                st.pop();
                st.pop();                    
            }
            if(st.empty()){
                if(c == '*')
                    cnt++;
            }
        }
        return cnt;
    }
};