class Solution {
public:
    int hammingWeight(int n) {
        string binary = "";
        while(n > 0){
            binary += char('0' + n % 2);
            n /= 2;
        }
        reverse(binary.begin(), binary.end());
        int cnt = 0;
        for(int i = 0; i < binary.size(); i++){
            if(binary[i] == '1') cnt++;
        }
        return cnt;
    }
};