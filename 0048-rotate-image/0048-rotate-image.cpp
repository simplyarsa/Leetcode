class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       int m=matrix.size(), i, j;
       for(i=0; i<m; i++){
           for(j=i+1; j<m; j++){
               swap(matrix[i][j], matrix[j][i]);
           }
       }   
       for(i=0; i<m; i++){
           reverse(matrix[i].begin(), matrix[i].end());
       }

    }
};