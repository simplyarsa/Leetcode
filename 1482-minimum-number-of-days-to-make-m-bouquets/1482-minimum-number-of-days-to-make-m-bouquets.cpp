class Solution {
public:
    bool check(vector<int> bloomDay, int m, int k, int day){
        int n=bloomDay.size();
        int count=0, bouquets=0;
        for(int i=0; i<n; i++){
            if(bloomDay[i]<=day){
                count++;
            }
            else{
               bouquets+=(count/k);
                count=0;
            }
        }
        bouquets+=(count/k);
        if(bouquets>=m) return 1;
        return 0;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val=m*1LL*k*1LL;
        if(val>bloomDay.size()) return -1;
        int max=*max_element(bloomDay.begin(), bloomDay.end());
        int low=1, high=max, mid;
        while(low<=high){
            mid=(low+high)/2;
            if(check(bloomDay, m, k, mid)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
        // for(int i=1; i<=max; i++){
        //     if(check(bloomDay, m, k, i)) return i;
        // }
        // return -1;
    }
};