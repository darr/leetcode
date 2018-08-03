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
        int buy1 = INT_MIN;
        int sell1 = 0;
        int buy2 = INT_MIN;
        int sell2 = 0;
        for(int i = 0; i< prices.size(); i++){
            buy1 = max(buy1,-prices[i]);
            sell1 = max(sell1,buy1 + prices[i]);
            buy2 = max(buy2, sell1 - prices[i]);
            sell2 = max(sell2,buy2 + prices[i]);
        }
       return sell2;
    }
};