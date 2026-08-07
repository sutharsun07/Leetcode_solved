class Solution {
public:
    int scoreOfString(string s) {
        int ans=0;
        int l=0;
        int r=1;
        while(r < s.size()){
            ans+=abs(int(s[l])-int(s[r]));
            l++;
            r++;
        }
        return ans;
    }
};