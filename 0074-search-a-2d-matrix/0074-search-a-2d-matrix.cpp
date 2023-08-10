class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0, j=matrix[i].size()-1, c;
        while(i<matrix.size() && j>=0){
            c=matrix[i][j];
            if(c==target) return true;
            else if (c<target){
                i++;
            }
            else{
                j--;
            }
        }
        return false;
    }
};