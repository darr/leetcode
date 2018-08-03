/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////


class Solution {
public:
    int minimumTotal(vector<vector<int> > &triangle) {
        int n = triangle.size();
        vector<int> dp(triangle.back());
        for (int i = n - 2; i >= 0; --i)
            for (int j = 0; j <= i; ++j)
                dp[j] = triangle[i][j] +  min(dp[j],dp[j+1]);
        return dp[0];
    }
    int minimumTotal2(vector<vector<int>>& triangle){
        int len = triangle.size();
        vector<int> dp(len,0);
        for(int i = len - 1; i >= 0; --i){
            for(int j = 0; j <= i; ++j){
                if(i == len - 1) dp[j] = triangle[i][j];
                else dp[j] = triangle[i][j] + min(dp[j],dp[j+1]);
            }
        }
        return dp[0];
    }
};