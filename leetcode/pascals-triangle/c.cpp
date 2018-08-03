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
    vector<vector<int> > generate4(int numRows) {
        vector<vector<int>> dp(numRows);
        if (numRows < 1) return dp;
        dp[0].push_back(1);
        for (int i =1; i < numRows; i++){
            dp[i].push_back(1);
            for(int j = 1; j < i; j++)
                dp[i].push_back(dp[i-1][j-1] + dp[i-1][j]);
            dp[i].push_back(1);
        }
        return dp;
    }

    vector<vector<int>> generate(int numRows){
        vector<vector<int>> dp(numRows);
        for(int i = 0; i < numRows; ++i){
            dp[i].push_back(1);
            for(int j = 1; j < i; ++j)
                dp[i].push_back(dp[i-1][j-1] + dp[i-1][j]);
            if (i>0)
                dp[i].push_back(1);
        }
        return dp;
    }
};