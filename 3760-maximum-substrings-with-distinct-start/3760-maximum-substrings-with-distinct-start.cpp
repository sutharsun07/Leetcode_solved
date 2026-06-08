class Solution {
public:
    int maxDistinct(string s) {
        set<char> ans;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(ans.contains(s[i])){
                
            }
            else{
                count++;
                ans.insert(s[i]);
            }
        }
        return count;
    }
};