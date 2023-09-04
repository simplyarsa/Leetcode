class Solution {
public:
    void helper(int index, int sum, int target, vector<int> c, vector<int> temp, vector<vector<int>> &ans){
        if(sum==target){
            ans.push_back(temp);
            return;
        }
        if(sum>target){
            return;
        }
        for(int i=index; i<c.size(); i++){
            if(i!=index && c[i]==c[i-1]) continue;
            if(c[i]>target) break;
            sum+=c[i];
            temp.push_back(c[i]);
            helper(i+1, sum, target, c, temp, ans);
            temp.pop_back();
            sum-=c[i];
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(c.begin(), c.end());
        helper(0, 0, target, c, temp, ans);
        return ans;
    }
};