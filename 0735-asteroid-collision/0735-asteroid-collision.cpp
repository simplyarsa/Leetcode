class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> st;
        for(int i=0; i<a.size(); i++){
            if(st.empty() || a[i]>0){
                 st.push(a[i]);
            }
            else{
                //different sign
                while(!st.empty() && st.top()>0 && abs(a[i])>st.top()){
                        st.pop();
                }
                if(!st.empty() && abs(a[i])==st.top()){
                    st.pop();
                }
                else if(st.empty() || st.top()<0){
                    st.push(a[i]);
                }
            }
        }
        vector<int> ans(st.size());
        for(int i=ans.size()-1;i>=0;i--){
            ans[i]=st.top();
            st.pop();
        }
        return ans;
    }
};