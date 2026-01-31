class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char> ans;
        for(int i=0;i<s.size();i++){
            ans.insert(s[i]);
        }
        return ans.size();
    }
};