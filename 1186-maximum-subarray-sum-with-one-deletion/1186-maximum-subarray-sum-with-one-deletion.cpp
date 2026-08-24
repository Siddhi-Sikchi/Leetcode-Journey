class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int nodelete = arr[0];
        int onedelete = INT_MIN;
        int ans = arr[0];

        for(int i = 1; i < arr.size(); i++){
            int oldNodelete = nodelete;
            int v1 = oldNodelete + arr[i];
            int v2 = arr[i];

            nodelete = max(v1, v2);

            int v3 = oldNodelete;
            int v4 = INT_MIN;

            if(onedelete != INT_MIN){
                v4 = onedelete + arr[i];
            }

            onedelete = max(v3, v4);

            ans = max(ans, max(nodelete, onedelete));
        }
        return ans;
    }
};