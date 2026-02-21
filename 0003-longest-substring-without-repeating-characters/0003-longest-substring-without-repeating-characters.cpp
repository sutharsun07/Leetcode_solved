class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> a;
        int l=0;
        int m=0;
        for(int r=0;r<s.size();r++){
            while(a.count(s[r])){
                a.erase(s[l]);
                l++;
            }
            a.insert(s[r]);
            m=max(m,r-l+1);
        }
        return m;
    }
};