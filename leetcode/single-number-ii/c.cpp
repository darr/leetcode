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
        for (int i = 0; i < 32; ++i){
            int sum = 0;
            for (int j = 0;j<n;++j){
                sum += (A[j] >> i) & 1;
            }
            res |= (sum % 3) << i;
        }
        return res;
    }
};