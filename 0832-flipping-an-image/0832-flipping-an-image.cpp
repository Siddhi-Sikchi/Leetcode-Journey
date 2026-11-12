class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

        for(int i = 0; i < image.size(); i++){
            int st = 0;
            int end = image.size() - 1;
            while(st < end){
                swap(image[i][st], image[i][end]);
                st++;
                end--;
            }
            for(int j = 0; j < image.size(); j++){
                if(image[i][j] == 1) image[i][j] = 0;
                else{
                    image[i][j] = 1;
                }
            }
        }
        return image;
    }
};