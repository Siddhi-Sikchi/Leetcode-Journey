class Solution {
public:
    string reversePrefix(string word, char ch) {
        int end = -1;
        for(int i = 0; i < word.size(); i++){
            if(word[i] == ch){
                end = i;
                break; 
            }         
        }
        int st = 0;
            while(st < end){
                swap(word[st], word[end]);
                st++;
                end--;
            }
        return word;
    }
};