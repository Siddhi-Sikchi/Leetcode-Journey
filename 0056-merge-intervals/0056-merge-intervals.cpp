class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        sort(in.begin(), in.end());
        vector<vector<int>> res;

        int st1 = in[0][0];
        int end1 = in[0][1];

        for(int i = 1; i < in.size(); i++){
            int st2 = in[i][0];
            int end2 = in[i][1];

            if(end1 >= st2){
                st1 = st1;
                end1 = max(end1, end2);
                continue;
            }
            res.push_back({st1, end1});
            st1 = st2;
            end1 = end2;
        }
        res.push_back({st1, end1});
        return res;
    }
};