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
    vector<int> getRow(int rowIndex) {
        vector<int> dp;
        dp.push_back(1);
        for(int i = 1; i <= rowIndex;i++){
            vector<int> tmp;
            tmp.push_back(1);
            for(int j = 1; j < i; j++)
                tmp.push_back(dp[j]+ dp[j-1]);
            tmp.push_back(1);
            dp = tmp;
        }
        return dp;
    }
};