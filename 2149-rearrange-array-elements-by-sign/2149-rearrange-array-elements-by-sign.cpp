class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int pos=0, neg=1;
        for(int i=0; i<n; i++){
            if(nums[i]>=0){
                ans[pos]=nums[i];
                pos=pos+2;
            }
            else{
                ans[neg]=nums[i];
                neg=neg+2;
            }
        }
        return ans;
       
        // vector<int> ans, pos, neg;
        // for(int num: nums){
        //     if(num>=0) pos.push_back(num);
        //     else neg.push_back(num);
        // }
        // int i=0, j=0;
        // while(i<nums.size()/2){
        //     ans.push_back(pos[i]);
        //     i++;
        //     ans.push_back(neg[j]);
        //     j++;
        // }
        // return ans;

    }
};