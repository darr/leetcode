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
    int longestConsecutive(vector<int>& nums) {
        int len = nums.size();
        unordered_set<int> se;
        for(int i=0;i<len;i++)
            se.insert(nums[i]);
        int maxLen = 0;
        for(int i=0;i<len;i++){
            int tmpLen = 1;
            for(int tmp = nums[i] + 1;se.count(tmp);tmpLen++,tmp++)
                se.erase(tmp);
            for(int tmp = nums[i] - 1;se.count(tmp);tmpLen++,tmp--)
                se.erase(tmp);
            maxLen = max(tmpLen, maxLen);
        }
        return maxLen;
    }
};