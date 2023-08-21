class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int l=0, r=0;
        long long count=0, sum=0,prod=0;
        for(r; r<nums.size(); r++){
            sum+=nums[r];
            for(l; sum*(r-l+1)>=k; l++){
                sum-=nums[l];
            }
            count+=(r-l+1);
        }
        return count;
    }
};