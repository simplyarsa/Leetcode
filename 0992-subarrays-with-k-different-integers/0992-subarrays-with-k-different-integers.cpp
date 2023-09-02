class Solution {
public:
    int atmost(vector<int> nums, int k){
        int l=0, r=0, ans=0;
        map<int, int> map;
        for(r; r<nums.size(); r++){
            map[nums[r]]++;
            for(l; map.size()>k; l++){
                map[nums[l]]--;
                if(map[nums[l]]<=0) map.erase(nums[l]);
            }
            ans+=(r-l+1);
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums, k)-atmost(nums, k-1);
    }
};