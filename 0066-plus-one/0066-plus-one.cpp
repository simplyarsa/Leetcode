class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i=digits.size()-1, carry=1;
        while(i>=0){
            if(carry){
                if (digits[i]+1>=10){
                    digits[i]=0;
                    carry=1;
                }
                else{
                    digits[i]++;
                    carry=0;
                }
            }
    
            i--;
        }
        if(carry) digits.insert(digits.begin(), 1);
        return digits;
    }
};