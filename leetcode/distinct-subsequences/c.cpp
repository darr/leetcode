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
    int numDistinct(string S, string T) {
        S=" "+S,T=" "+T;
        int n=S.length();
        int m=T.length();
        int i;
        int j;
        vector<vector<int> > dp(n+1,vector<int>(m+1,0));
        for(i=0;i<=n;i++) dp[i][0]=1;
        for(i=1;i<=n;i++)
            for(j=1;j<=m;j++){
                dp[i][j]=dp[i-1][j];
                if(S[i]==T[j]) dp[i][j]+=dp[i-1][j-1];
            }
        return dp[n][m];
    }
};