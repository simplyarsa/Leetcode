class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> map;
        for(int i=0; i<nums.size(); i++){
            int remaining=target-nums[i];
            if(map.find(remaining)!=map.end()) return {i, map[remaining]};
            map[nums[i]]=i;
        }
        return {-1, -1};
    }
};