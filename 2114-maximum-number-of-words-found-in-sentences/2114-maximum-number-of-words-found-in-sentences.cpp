class Solution {
public:
    int mostWordsFound(vector<string>& sen) {
        int mxCnt = INT_MIN;
        for(string x : sen){
            int cnt = 1;

            for(char c : x){
                if(c == ' ')
                    cnt++;
            }
            mxCnt = max(cnt, mxCnt);
        }
       
        return mxCnt;
    }
};