class Solution {
public:
    void helper(int index, int sum, int target, vector<int> c, vector<int> temp, 
    vector<vector<int>> &ans){
        if(sum==target){
            ans.push_back(temp);
            return;
        }
        if(sum>target){
            return;
        }
        for(int i=index; i<c.size(); i++){
            sum+=c[i];
            temp.push_back(c[i]);
            helper(i, sum, target, c, temp, ans);
            temp.pop_back();
            sum-=c[i];
        }

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(0, 0, target, candidates, temp, ans);
        return ans;
    }
};