#Question: Valid sudoku
#Difficulty: Medium
#Approach: Just check every box, column, row for the element if it is in a set, if not add it, if it does not valid
#Time complexity:O(n^2)
#Link: https://leetcode.com/problems/valid-sudoku/submissions/2110566037
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<int> col[9];
        set<int> row[9];
        set<int> box[9];
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                int b=(i / 3) * 3 + (j / 3);
                if(board[i][j]=='.') continue;
                if(row[i].find(board[i][j]) != row[i].end())    return false;

                if(col[j].find(board[i][j]) != col[j].end())    return false;

                if(box[b].find(board[i][j]) != box[b].end())    return false;
                
                row[i].insert(board[i][j]);
                col[j].insert(board[i][j]);
                box[b].insert(board[i][j]);
            }
        }
        return true;
    }
};
