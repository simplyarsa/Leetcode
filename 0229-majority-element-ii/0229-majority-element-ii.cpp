class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //moores voting algorithm
        int count1=0, count2=0, elem1=-1, elem2=-1;
        for(int i=0; i<nums.size(); i++){
            if(count1==0 && elem2!=nums[i]){
                count1=1;
                elem1=nums[i];
            }
            else if(count2==0 && elem1!=nums[i]){
                count2=1;
                elem2=nums[i];
            }
            else if(elem1==nums[i]){
                count1++;
            }
            else if(elem2==nums[i]){
                count2++;
            }
            else{
                count1--, count2--;
            }
        }
        count1=0, count2=0;
        int n=(nums.size()/3)+1;
        for(int i=0; i<nums.size(); i++){
            if(elem1==nums[i]) count1++;
            if(elem2==nums[i]) count2++;
        }
        vector<int> ans;
        if(count1>=n) ans.push_back(elem1);
        if(elem1!=elem2){
            if(count2>=n) ans.push_back(elem2);
        }
        return ans;
        
        
        if(elem1==-1) return {elem2};
        if(elem2==-1) return {elem1};
        return {elem1, elem2};
    }



    //     vector<int> ans;
    //     int n=(nums.size()/3)+1;
    //     map<int, int> map;
    //     for(int num : nums){
    //         map[num]++;
    //     }
    //     for(auto it: map){
    //         if(it.second>=n){
    //             ans.push_back(it.first);
    //         }
    //     }
    //     return ans;
    // }
};