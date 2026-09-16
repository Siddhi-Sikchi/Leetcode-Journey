class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;

        vector<int> res(nums.size(), -1);

        for(int i = nums.size() - 1; i >= 0; i--){
            st.push(nums[i]);
        }

        for(int i = nums.size() - 1; i >= 0; i--){
            while(!st.empty()){
                if(st.top() <= nums[i]){
                    st.pop();
                }else{
                    res[i] = st.top();
                    break;
                }
            }
            st.push(nums[i]);
        }
        return res;
    }
};