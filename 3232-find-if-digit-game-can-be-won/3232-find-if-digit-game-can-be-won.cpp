class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sin = 0;
        int dou = 0;
        for(int x : nums){
            if(x < 10)
                sin += x;
            if(x >= 10)
                dou += x;
            
        }
        return sin > dou || sin < dou;
    }
};