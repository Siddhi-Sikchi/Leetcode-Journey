class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        stack<int> st;

        vector<int> res(nums.size(), 0);

        st.push(nums.size() - 1);

        for(int i = nums.size() - 2; i >= 0; i--){

            while(!st.empty()){
                if(nums[st.top()] <= nums[i]) {
                    st.pop();
                }
                else{
                    res[i] = st.top() - i;
                    break;
                }
            }
            st.push(i);
        }
        return res;
    }
};