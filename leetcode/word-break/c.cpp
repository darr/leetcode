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
    bool wordBreak(string s, unordered_set<string> &dict) {
        vector<bool> flag(s.length()+1,false);
        flag[0] = true;
        for(int i = 1; i < s.length() + 1; ++i){
            for (int j = i + 1; j >= 0; j--){
                if (flag[j] && dict.count(s.substr(j,i-j)) != 0){
                    flag[i] = true;
                    break;
                }
            }
        }
        return flag[s.length()];
    }
};