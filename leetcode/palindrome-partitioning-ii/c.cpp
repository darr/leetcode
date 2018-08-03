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
    int minCut(string s) {
        int n = s.size();
        if(n < 2) return 0;
        vector<int> dp(n, INT_MAX);
        vector<bool> tmp(n, false);
        vector<vector<bool> > p(n, tmp);
        for(int i=0; i<n; i++){
            for(int j=i; j>-1; j--){
                if(s[i] == s[j] && (i-j < 2 || p[j+1][i-1])){
                    p[j][i] = true;
                    dp[i] = min(dp[i], j == 0? 0 : dp[j-1] + 1);
                }
            }
        }
        return dp.back();
    }
};