class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int count=0;
        int i=0;
        for(i=0; i<s.size() && count<g.size(); i++){
            if(g[count]<=s[i]){
                count++;
            }
        }
        return count;
    }
};