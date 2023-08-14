class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       vector<int> ans;
       int top=0, left=0, bottom=matrix.size()-1, right=matrix[0].size()-1, i=0;
       while(top<=bottom && left<=right){
           for(i=left; i<=right; i++){
               ans.push_back(matrix[top][i]);
           }
           top++;
           for(i=top; i<=bottom; i++){
               ans.push_back(matrix[i][right]);
           }
           right--;
            if (top <= bottom) {
            for (int i = right; i >= left; i--)
            ans.push_back(matrix[bottom][i]);
            bottom--;
            }

            // For moving bottom to top.
            if (left <= right) {
            for (int i = bottom; i >= top; i--)
                ans.push_back(matrix[i][left]);

            left++;
            }
            }
       return ans;
    }
};