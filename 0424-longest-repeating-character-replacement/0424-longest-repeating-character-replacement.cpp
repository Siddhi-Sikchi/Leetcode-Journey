class Solution {
public:
    int find(vector<int> a){
        int mxCnt = -1;
        for(int i = 0; i < 256; i++){
            mxCnt = max(mxCnt, a[i]);
        }
        return mxCnt;
    }

    int characterReplacement(string s, int k) {
        int res = 0;
        int low = 0;
        vector<int> a(256, 0);

        for(int high = 0; high < s.size(); high++){
            a[s[high]]++;
            int len = high - low + 1;
            int mxCnt = find(a);
            int diff = len - mxCnt;

            while(diff > k){
                a[s[low]]--;
                low++;
                len = high - low + 1;
                mxCnt = find(a);
                diff = len - mxCnt;
            }
            len = high - low + 1;
            res = max(res, len);
        }
        return res;
    }
};