class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if(board.empty()) return false;
        int m = board.size();
        int n = board[0].size();
        for(int i=0;i<m;++i)
            for(int j=0;j<n;++j){
                if(DFS(board,i,j,0,word))
                    return true;
            }
        return false;

    }
    bool DFS(vector<vector<char>>& board, int i, int j, int k,string& word)
    {
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j]!=word[k])
            return false;
        if(k==word.length()-1) return true;
        board[i][j] = '\0';
        bool res = DFS(board,i-1,j,k+1,word) || DFS(board,i+1,j,k+1,word) || DFS(board,i,j-1,k+1,word) || DFS(board,i,j+1,k+1,word);
        board[i][j] = word[k];
        return res;
    }
};