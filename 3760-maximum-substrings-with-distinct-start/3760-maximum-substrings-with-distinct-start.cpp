class Solution {
public:
    int maxDistinct(string s) {
        set<char> ans;
        for(int i=0;i<s.size();i++){
            ans.insert(s[i]);
        }
        return ans.size();
    }
};