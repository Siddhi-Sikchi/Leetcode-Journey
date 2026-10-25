class Solution {
public:
    int hammingDistance(int x, int y) {
        string x_bits = "";
        string y_bits = "";
        while(x > 0){
            x_bits += to_string(x % 2);
            x /= 2;
        }
        while(y > 0){
            y_bits += to_string(y % 2);
            y /= 2;
        }
        reverse(x_bits.begin(), x_bits.end());
        reverse(y_bits.begin(), y_bits.end());

        int len = max(x_bits.size(), y_bits.size());

        while(x_bits.size() < len){
            x_bits = "0" + x_bits;
        }

        while(y_bits.size() < len){
            y_bits = "0" + y_bits;
        }

        int cnt = 0;
        for(int i = x_bits.size() - 1; i >= 0; i--){
            if(x_bits[i] != y_bits[i])
                cnt++;
        }
        return cnt;
    }
};