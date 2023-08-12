class Solution {
public:
    
    void generateSubsets(int index, vector<int> nums, vector<int> temp, vector<vector<int>>& ans){
        if(index>=nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[index]);
        generateSubsets(index+1, nums, temp, ans);
        temp.pop_back();     
        generateSubsets(index+1, nums, temp, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int index=0;
        vector<vector<int>> ans;
        vector<int> temp;
        generateSubsets(index, nums, temp, ans);
        return ans;


        // using bit manipulation
        // vector<vector<int>> ans;
        // int n=nums.size();
        // for(int i=0; i < (1 << n); i++){
        //     vector<int> temp;
        //     for(int j=0; j<nums.size(); j++){
        //         if(i & (1<<j)){
        //             temp.push_back(nums[j]);
        //         }
        //     }
        //     ans.push_back(temp);
        // }
        // return ans;
    }
};