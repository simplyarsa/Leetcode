class Solution {
public:
    // int solve(int i, int j, string a, string b ,vector<vector<int>> &dp){
    //     if(i>=a.size() || j>=b.size()) return 0;
    //     if(dp[i][j]!=-1) return dp[i][j];

    //     int ans=0;
    //     if(a[i]==b[j]){
    //         ans= 1+solve(i+1, j+1, a, b, dp);
    //     }
    //     else{
    //         int l=solve(i+1, j, a, b, dp);
    //         int r=solve(i, j+1, a, b, dp);
    //         ans= max(l, r);
    //     }
    //     return dp[i][j]=ans;
        
    // }

    int solve(string a, string b){
        vector<vector<int>> dp(a.size()+1, vector<int>(b.size()+1, 0));

        for(int i=a.size()-1; i>=0; i--){
            for(int j=b.size()-1; j>=0; j--){
                int ans=0;
                if(a[i]==b[j]){
                    ans= 1+dp[i+1][j+1];
                }
                else{
                    int l=dp[i+1][j];
                    int r=dp[i][j+1];
                    ans= max(l, r);
                 }
                dp[i][j]=ans;
            }
        }
        return dp[0][0];
    }

    int longestCommonSubsequence(string text1, string text2) {
        // vector<vector<int>> dp(text1.size(), vector<int>(text2.size(), -1));
        // return solve(0, 0 , text1, text2, dp);

        return solve(text1, text2);
    }
};