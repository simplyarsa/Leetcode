class Solution {
public:
    void solve(int index, map<char, string> map, string temp, string digits, vector<string> &ans){
        if(index>=digits.size()){
            if(temp=="") return;
            ans.push_back(temp);
            return;
        }
        string p=map[digits[index]];
        cout<<p<<" ";
        for(int i=0; i<p.size(); i++){
            temp+=p[i];
            solve(index+1, map, temp, digits, ans);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        map<char, string> map;
        map['2']="abc";
        map['3']="def";
        map['4']="ghi";
        map['5']="jkl";
        map['6']="mno";
        map['7']="pqrs";
        map['8']="tuv";
        map['9']="wxyz";
        vector<string> ans;
        solve(0, map, "", digits, ans);
        return ans;
    }
};