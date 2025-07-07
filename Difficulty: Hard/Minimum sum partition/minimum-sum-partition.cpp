class Solution {

  public:
    int minDifference(vector<int>& a) {
        // Your code goes here
        int sum = 0;
        for(auto x : a) sum += x;
        int dp[sum + 1] = {1};
        for(int i = 0; i < a.size(); i++){
            for(int j = sum; j >= a[i]; j--){
                if(dp[j - a[i]]){
                    dp[j] = 1;
                }
            }
        }
        int res = 1e9;
        for(int i = 1; i <= sum; i++){
            if(dp[i]){
                res = min(res, abs(sum - 2 * i));
            }
        }
        return res;
    }
};