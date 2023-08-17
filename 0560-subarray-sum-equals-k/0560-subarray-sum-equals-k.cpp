class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        map[0]=1;
        int count=0,presum=0;
        for(int i=0; i<nums.size(); i++){
            presum+=nums[i];
            int rem=presum-k;
            count+=map[rem];
            map[presum]++;
        }
        return count;

        //brute force
        // int count=0;
        // for(int i=0; i<nums.size(); i++){
        //     int sum=0;
        //     for(int j=i; j<nums.size(); j++){
        //         sum+=nums[j];
        //         if(sum==k){
        //             count++;
        //             break;
        //         }
        //     }
            
        // }
        // return count;
    }
};