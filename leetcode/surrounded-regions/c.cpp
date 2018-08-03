/////////////////////////////////////
// File name : c.cpp
// Create date : 2018-07-23 08:53
// Modified date : 2018-07-23 11:24
// Author : DARREN
// Describe : not set
// Email : lzygzh@126.com
////////////////////////////////////


class Solution {
    void dfs(vector<vector<char> > &board,int row,int col){
       if (board[row][col]=='O'){
            board[row][col]='*';
            if (row<board.size()-1) dfs(board,row+1,col);
            if (col<board[0].size()-1) dfs(board,row,col+1);
            if (row>1) dfs(board,row-1,col);
            if (col>1) dfs(board,row,col-1);
        }
    }
public:
    void solve(vector<vector<char>> &board) {
        if (board.size()<1 || board[0].size()<1) return;
        int row = board.size(),col = board[0].size();
         
        for(int i=0;i<row;++i){
            dfs(board,i,0);
            dfs(board,i,col-1);
        }
        for(int i=0;i<col;++i){
            dfs(board,0,i);
            dfs(board,row-1,i);
        }
         
        for(int i=0;i<row;++i){
            for(int j=0;j<col;++j){
                if (board[i][j]=='O') board[i][j]='X';
                if (board[i][j]=='*') board[i][j]='O';
            }
        }
    }
};