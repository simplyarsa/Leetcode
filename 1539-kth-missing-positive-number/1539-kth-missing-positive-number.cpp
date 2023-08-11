class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // linear search
        // for(int i=0; i<arr.size(); i++){
        //     if(arr[i]>k) return k;
        //     else k++;
        // }
        // return k;

        //binary search
        int low=0, high=arr.size()-1, mid;
        while(low<=high){
            mid=(low+high)/2;
            int missing=arr[mid]-(mid+1);
            if(missing<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return k+high+1;
    }
};