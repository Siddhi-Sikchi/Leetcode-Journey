class Solution {
public:
    int countDigits(int num) {
        int cnt = 0;
        int num1 = num;
        while(num != 0){
            int remain = num % 10;
            if(num1 % remain == 0)
                cnt++;
            num /= 10;
        }
        return cnt;
    }
};