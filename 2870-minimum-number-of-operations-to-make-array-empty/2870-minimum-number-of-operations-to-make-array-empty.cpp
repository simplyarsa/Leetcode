class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int num: nums ){
            map[num]++;
        }
        int ans=0;
        for(auto it: map){
            int c=it.second;
            if(c==1) return -1;
            // while(c%3!=0){
            //     c-=2;
            //     ans++;
            // }
            ans+=ceil((double)c/3);
        }
        return ans;
        
    
    }
};