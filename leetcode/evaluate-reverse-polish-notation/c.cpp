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
    int evalRPN(vector<string> &tokens){
        int len = tokens.size();
        stack<int> S;
        for (int i = 0; i< len; i++){
            if ("+" == tokens[i] || "-" == tokens[i] || tokens[i] == "*" || tokens[i] == "/"){
                int arg2 = S.top(); S.pop();
                int arg1 = S.top(); S.pop();
                S.push(runOperator(arg1,arg2,tokens[i][0]));
            }else
                S.push(stoi(tokens[i]));
        }
        return S.top();
    }
    int runOperator(int arg1,int arg2,char optor){
        if('+' == optor) return arg1 + arg2;
        else if('-' == optor) return arg1 - arg2;
        else if('*' == optor) return arg1 * arg2;
        else return arg1 / arg2;
    }
};