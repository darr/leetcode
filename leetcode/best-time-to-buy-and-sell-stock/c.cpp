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
    int maxProfit(vector<int> &prices) {
        if(prices.size() < 2) return 0;
        int maxPro = 0;
        int curMin = prices[0];
        for(int i =1; i < prices.size();i++){
            if (prices[i] < curMin) 
                curMin = prices[i];
            else
                maxPro = max(prices[i] - curMin,maxPro);
        }
        return maxPro;
    }
    
    int maxProfit4(vector<int> &prices) {
        if(prices.size() < 2) return 0;
        int maxPro = 0;
        int curMin = prices[0];
        for(int i =1; i < prices.size();i++){
            int cur = prices[i];
            if (cur < curMin) 
                curMin = cur;
            else{
                int curPro = cur - curMin;
                if (curPro > maxPro)
                    maxPro = curPro;
            }
        }
        return maxPro;
    }
    
    int maxProfit2(vector<int> &prices) {
        if(prices.size() < 2) return 0;
        int maxPro = 0;
        int curMin = prices[0];
        for(int i =1; i < prices.size();i++){
            if (prices[i] < curMin) 
                curMin = prices[i];
            else
                if (prices[i] - curMin > maxPro)
                    maxPro = prices[i] - curMin;
        }
        return maxPro;
    }
};