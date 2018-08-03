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
    vector<string> wordBreak(string s, unordered_set<string> &dict){
        vector<string> result;
        if(dict.find(s)!=dict.end()) 
            result.push_back(s);
        for(int i=1;i<s.size();i++) {
            string w = s.substr(i);
            if(dict.find(w) == dict.end())
                continue;
            string str = s.substr(0,i);
            vector<string> left = wordBreak(str,dict);
            Add(left,w);
            result.insert(result.begin(), left.begin(), left.end());
        }         
        return result;
    }
    
    void Add(vector<string> &str, string w){
        for(vector<string>::iterator it=str.begin();it!=str.end();it++)
            *it += " " + w;     
    }
    
    vector<string> wordBreak2(string s, unordered_set<string> &dict){
        vector<string> result;
        if (dict.find(s) != dict.end()) 
            result.push_back(s);
        for(int i = s.size() -1; i > 0;i--){
            string w = s.substr(i);
            if(dict.find(w) == dict.end())
                continue;
            string str = s.substr(0,i);
            vector<string> left = wordBreak(str,dict);
            Add(left,w);
            result.insert(result.end(),left.begin(),left.end());
        }
        return result;
    }
};