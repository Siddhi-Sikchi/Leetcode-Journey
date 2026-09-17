class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int> st;

        for(int i = 0; i < op.size(); i++){
            if(op[i] == "C"){
                st.pop();
            }
            else if(op[i] == "D"){
                st.push(2 * st.top());
            }else if(op[i] == "+"){
                int first = st.top();
                st.pop();
                int second = st.top();
                st.push(first);
                st.push(first + second);
            }else{
                st.push(stoi(op[i]));
            }
        }

        int sum = 0;

        while(!st.empty()){
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};