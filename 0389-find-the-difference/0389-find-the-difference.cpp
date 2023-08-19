class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int> map;
        for(int i=0; i<t.size(); i++){
            map[t[i]]++;
            if(i<s.size()){
                map[s[i]]--;
            }
        }
        for(auto it: map){
            if(it.second>0) return it.first;
        }
        return 'a';
    }
};