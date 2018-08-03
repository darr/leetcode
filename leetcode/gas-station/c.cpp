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
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
        int total = 0, sum = 0;
        int index = -1;
        for (int i = 0; i < gas.size(); i++) {
            sum += gas[i] - cost[i];        
            total += gas[i] - cost[i];  
            if (sum < 0) {
                sum = 0;
                index = i;    
            }
        }
        return total >= 0 ? index + 1 : -1;
    }
};