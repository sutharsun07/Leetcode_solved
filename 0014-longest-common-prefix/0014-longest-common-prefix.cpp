class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string a=strs[0];
        for(int i=1;i<strs.size();i++){
            while(strs[i].substr(0,a.size())!=a){
                a=a.substr(0,a.size()-1);
            }
        }
        return a;
    }
};