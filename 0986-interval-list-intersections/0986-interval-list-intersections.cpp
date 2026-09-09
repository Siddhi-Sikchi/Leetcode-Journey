class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& fir, vector<vector<int>>& sec) {
        vector<vector<int>> res;

        int i = 0; 
        int j = 0;

        while(i < fir.size() && j < sec.size()){
            int st1 = fir[i][0];
            int end1 = fir[i][1];

            int st2 = sec[j][0];
            int end2 = sec[j][1];

            if(st1 <= st2){
                if(end1 >= st2){
                    int st = max(st1, st2);
                    int end = min(end1, end2);

                    res.push_back({st, end});
                }
            }else{
                if(end2 >= st1){
                    int st = max(st1, st2);
                    int end = min(end1, end2);

                    res.push_back({st, end});
                }
            }

            if(end1 <= end2){
                i++;
            }else{
                j++;
            }
        }
        return res;
    }
};