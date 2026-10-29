class Solution {
public:
    int countEven(int num) {
        int ans = 0;
        for(int i = 2; i <= num; i++){
            int digSum = 0;
            int temp = i;

            while(temp > 0){
                digSum += temp % 10;
                temp /= 10;
            }
            if(digSum % 2 == 0)
                ans++;
        }
        return ans;
    }
};