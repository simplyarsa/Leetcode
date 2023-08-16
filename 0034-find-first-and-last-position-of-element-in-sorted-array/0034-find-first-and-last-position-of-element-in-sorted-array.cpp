class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int low=0, high=nums.size()-1, mid, lb=-1, ub=nums.size();
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]>=target){
                lb=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        if(lb==-1 || nums[lb]!=target) return {-1,-1};
        low=0, high=nums.size()-1;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]>target){
                ub=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        return {lb, ub-1};

    }
};