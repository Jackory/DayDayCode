class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        int n = array.size();
        vector<int> dp(n,0);
        dp[0] = array[0];
        for(int i=1;i<n;++i) {
            dp[i] = max(array[i], array[i] + dp[i-1]);
        }
        return *max_element(dp.begin(),dp.end());
    }
};