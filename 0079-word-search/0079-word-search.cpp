class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {

        int n = board.size() ;
        int m = board[0].size() ;

        for (int i=0;i<n;i++) {
            for (int j=0;j<m;j++) {
                if (board[i][j] == word[0]) {
                    if (solve(board,word,i,j,0)) {
                        return true ;
                    } 
                }
            }
        }

        return false ;
    }

    bool solve (vector<vector<char>>& board, string word ,int i, int j , int index) {

        int n = board.size() ;
        int m = board[0].size() ;

        if (index == word.size()) {
            return true ;
        }

        if (i<0 || i>n-1 || j<0 || j>m-1) {
            return false ;
        }

        if (board[i][j] != word[index]) {
            return false ;
        }

        char ch = board[i][j] ;

        board[i][j] = '$' ;

        bool found = 
        solve(board,word,i-1,j,index+1) ||  // up
        solve(board,word,i+1,j,index+1) ||  // down
        solve(board,word,i,j-1,index+1) ||  // left
        solve(board,word,i,j+1,index+1) ;   // right

        board[i][j] = ch ;

        return found ;

    }
};