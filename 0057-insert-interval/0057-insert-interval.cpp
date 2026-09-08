class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& in, vector<int>& newI) {
        vector<vector<int>> res;

        bool inserted = false;

        for(int i = 0; i < in.size(); i++){
            int st = in[i][0];
            int end = in[i][1];

            if(inserted == false && st >= newI[0]){
                res.push_back(newI);
                inserted = true;
            }
            res.push_back({st, end});
        }

        if(!inserted){
            res.push_back(newI);
        }

        vector<vector<int>> ans;

        int st1 = res[0][0];
        int end1 = res[0][1];

        for(int i = 1; i < res.size(); i++){
            int st2 = res[i][0];
            int end2 = res[i][1];

            if(end1 >= st2){
                st1 = min(st1, st2);
                end1 = max(end1, end2);

                continue;
            }

            ans.push_back({st1, end1});
            st1 = st2;
            end1 = end2;
        }
        ans.push_back({st1, end1});
        return ans;
    }
};