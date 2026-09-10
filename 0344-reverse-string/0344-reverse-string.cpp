class Solution {
public:
    void reverseString(vector<char>& s) {
        // int st = 0; 
        // int end = s.size() - 1;

        // while(st < end){
        //     swap(s[st], s[end]);
        //     st++;
        //     end--;
        // }

        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            st.push(s[i]);
        }
        // for(int i = 0; i < s.size(); i++){
        //     s[i] = st.top();
        //     st.pop();
        // }
        s.clear();
        while(!st.empty()){
            s.push_back(st.top());
            st.pop();
        }


    }
};