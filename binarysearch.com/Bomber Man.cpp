// First go to binarysearch.com -> problems -> Bomber Man.
/*
You are given a two-dimensional integer matrix of 1s and 0s, where a 1 represents a bomb and 0 represents an empty cell. When a bomb explodes, all the spaces along on the same row and column are damaged. Return the number of spaces you can stand in to not get damaged.

Constraints

n * m ≤ 200,000 where n and m are the number of rows and columns in matrix.
Example 1
Input
matrix = [
    [1, 0, 0],
    [0, 1, 0],
    [0, 0, 0]
]
Output
1
Explanation
Only the bottom right cell is safe

*/
int solve(vector<vector<int>>& matrix) {
    set<int> s1;
    set<int> s2;
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[i].size(); j++){
            if(matrix[i][j] == 1){
                s1.insert(i);
                s2.insert(j);
            }
        }
    }
    int count = 0;
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[i].size(); j++){
            if(s1.find(i) != s1.end() || s2.find(j) != s2.end()){
                continue;
            }else{
                count++;
            }
        }
    }
    return count;
}