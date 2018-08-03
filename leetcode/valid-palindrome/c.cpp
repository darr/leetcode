/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////


class Solution {
        bool isAlphaNum(char &ch) {
        if (ch >= 'a' && ch <= 'z') return true;
        if (ch >= 'A' && ch <= 'Z') return true;
        if (ch >= '0' && ch <= '9') return true;
        return false;
    }
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1 ;
        while (left < right) {
            if (!isAlphaNum(s[left])) ++left;
            else if (!isAlphaNum(s[right])) --right;
            else if ((s[left] + 32 - 'a') %32 != (s[right] + 32 - 'a') % 32) return false;
            else {
                ++left; --right;
            }
        }
        return true;
    }
    bool isPalindrome2(string s){
        if("" == s) return true;
        int left = 0;
        int right = s.size() - 1;
        while (left<right){
            if(!isAlphaNum(s[left])) left++;
            else if (!isAlphaNum(s[right])) right--;
            else if ((s[left] + 32 - 'a') %32 != (s[right] + 32 - 'a') % 32) return false;
            else { left++; right--;}
        }
        return true;
    }
};