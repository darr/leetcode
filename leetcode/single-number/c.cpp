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
    int singleNumber(int A[], int n) {
        int res = 0;
        for (int i =0; i<n;i++){
            res ^= A[i];
        }
        return res;
    }
};