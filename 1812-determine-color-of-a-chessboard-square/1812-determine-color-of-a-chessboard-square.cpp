class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int sum = 0;
        for(char c : coordinates){
            sum += c;
        }
        if(sum % 2 != 0)
            return true;
        return false;
    }
};