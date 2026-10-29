class Solution {
public:
    int mod(int x){
        if(x < 0)
            return -x;
        return x;
    }
    int scoreOfString(string s) {
        int i = 0; 
        int j = 1;
        int sum = 0;
        while(j < s.size()){
            sum += mod(s[i] - s[j]);
            i++;
            j++;
        }
        return sum;
    }
};