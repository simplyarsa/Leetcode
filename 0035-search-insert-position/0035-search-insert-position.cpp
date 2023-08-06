class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lower=0, upper=nums.size()-1, mid, ans=nums.size();
        while(lower<=upper){
            mid=(lower+upper)/2;
            if(nums[mid]>=target){
                ans=mid;
                upper=mid-1;
            }
            else lower=mid+1;
        }
        return ans;
    }
};