class Solution {
public:
    int maxVowels(string s, int k) {
        int cnt = 0; 
        for(int i = 0; i < k; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                cnt++;
            }
        }
        int maxCnt = cnt;
        int low = 0; 
        int high = k;
        while(high < s.size()){
            if(s[low] == 'a' || s[low] == 'e' || s[low] == 'i' || s[low] == 'o' || s[low] == 'u'){
                cnt--;
            }

            if(s[high] == 'a' || s[high] == 'e' || s[high] == 'i' || s[high] == 'o' || s[high] == 'u'){
                cnt++;
            }

            low++;
            high++;
            maxCnt = max(maxCnt, cnt);
        }
        return maxCnt;
    }
};