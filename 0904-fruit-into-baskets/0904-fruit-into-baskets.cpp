class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low = 0;
        int mxLen = 0;

        unordered_map<int, int> m;

        for(int high = 0; high < fruits.size(); high++){
            m[fruits[high]]++;

            while(m.size() > 2){
                m[fruits[low]]--;
                if(m[fruits[low]] == 0){
                    m.erase(fruits[low]);
                }
                low++;
            }
            int len = high - low + 1;
            mxLen = max(len, mxLen);
        }
        return mxLen;
    }
};