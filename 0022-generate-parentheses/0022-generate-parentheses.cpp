class Solution {
public:
    void solve(int i, int j, int n, string temp, vector<string> &ans){
        if(i==n && j==n){
            ans.push_back(temp);
            return;
        }
        if(i<n) solve(i+1, j, n, temp+'(', ans);
        if(j<i) solve(i, j+1, n, temp+')', ans);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(0, 0, n, "", ans);
        return ans;
    }
};