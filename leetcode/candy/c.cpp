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
    int candy(vector<int> &ratings) {
        int len=ratings.size();
        if(len==1) return 1;
        int sum=0;
        vector<int> v(len,1);
        for(int i=1;i<len;i++){
            if(ratings[i] > ratings[i-1])
                v[i]=v[i-1]+1;
        }
        for(int i=len-2;i>=0;i--){
            if(ratings[i] > ratings[i+1] && v[i] <= v[i+1])
                v[i]=v[i+1]+1;
        }
        for(int i=0;i<len;i++){
            sum+=v[i];
        }
        return sum;
    }
};