class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n=nums.size(), j=0, len=0;
        unordered_map<int, int> map;

        for(int i=0; i<n; i++){
            map[nums[i]]++;
            len=max(len, map[nums[i]]);
        }
        vector<vector<int>> ans(len);

        for(auto it: map){
            for(int j=0; j<it.second; j++){
                ans[j].push_back(it.first);
            }
        }
        return ans;



        // int n=nums.size(), j=0;
        // vector<vector<int>> ans(n);
        // sort(begin(nums), end(nums));
        // for(int i=0; i<n; i++){
        //     if(i>0 && nums[i]==nums[i-1]){
        //         j++;
        //         ans[j].push_back(nums[i]);
        //     }
        //     else{
        //         j=0;
        //         ans[j].push_back(nums[i]);
        //     }
        // }
        // vector<int> temp;
        // for(int i=n-1; i>=0; i--){
        //     if(ans[i]==temp){
        //         ans.pop_back();
        //     }
        // }
        // return ans;
    }
};