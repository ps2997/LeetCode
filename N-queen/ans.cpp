class Solution {
public:


    bool isSafe(int row, int col, vector<string> board, int n){
        int tempRow = row;
        int tempCol = col;

        // for upper left diagonal
        while(row>=0 && col>=0){
            if(board[row][col]=='Q') return false;
            row--;
            col--;
        }

        row = tempRow;
        col = tempCol;

        // for rows on the left
        while(col>=0){
            if(board[row][col]=='Q') return false;
            col--;
        }

        row = tempRow;
        col = tempCol;

        // for lower left diagonal 
        while(col>=0 && row<n){
            if(board[row][col]=='Q') return false;
            col--;
            row++;
        }

        return true;

    }


    void solve(vector<vector<string>> &ans, vector<string> &board, int n, int col){

        // base case
        if(col==n){
            ans.push_back(board);
            return;
        }


       for(int row=0; row<n; row++){
           if(isSafe(row, col, board, n)){
               board[row][col] = 'Q';
               solve(ans, board, n, col+1);
               board[row][col] = '.';
           }
       }

    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');

        for(int i=0; i<n; i++) board[i] = s;
        solve(ans, board, n, 0);
        return ans;

    }
};
