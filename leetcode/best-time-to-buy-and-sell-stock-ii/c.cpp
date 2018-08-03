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
    int maxProfit(vector<int>& prices){
        int res = 0;
        int n = prices.size() - 1;
        for (int i = 0; i < n; ++i){
            if (prices[i] < prices[i+1])
                res += prices[i + 1] - prices[i];
        }
        return res;
    }
};