//https://takeuforward.org/data-structure/n-queen-problem-return-all-distinct-solutions-to-the-n-queens-puzzle/

class Solution {
    public:
    bool isSafe(int row,int col,vector<string>board,int n){
        int trow=row;
        int tcol=col;
        
        // check upper diagonal
        while(row>=0 && col>=0){
            if(board[row][col]=='Q') return false;
            row--;
            col--;
        }
        
        //check left row
        row=trow,col=tcol;
        while(col>=0){
            if(board[row][col]=='Q') return false;
            col--;
        }
        
        //check lower diagonal
        row=trow,col=tcol;
        while(row<n && col>=0){
            if(board[row][col]=='Q') return false;
            row++;
            col--;
        }
        
        return true;
    }
    public:
    void helper(int col,vector<vector<string>>&ans,vector<string>&board,int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(isSafe(row,col,board,n)){
                 board[row][col]='Q';
                helper(col+1,ans,board,n);
                board[row][col]='.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        helper(0,ans,board,n);
        return ans;
        
    }
};
