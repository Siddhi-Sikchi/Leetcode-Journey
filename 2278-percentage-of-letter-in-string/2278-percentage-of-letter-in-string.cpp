class Solution {
public:
    int percentageLetter(string s, char letter) {
        double total = 0;
        double alpha = 0;
        for(char c : s){
            total++;
            if(c == letter)
                alpha++;
        }
        return (alpha / total) * 100;
    }
};