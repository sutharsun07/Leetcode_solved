class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> r[9],c[9],b[9];
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char a=board[i][j];
                if(a == '.'){
                    continue;
                }
                int bi=(i/3)*3+(j/3);
                if(r[i].count(a) || c[i].count(a) || b[bi].count(a)){
                    return false;
                }
                r[i].insert(a);
                c[i].insert(a);
                b[bi].insert(a);
            }
        }
        return true;
    }
};