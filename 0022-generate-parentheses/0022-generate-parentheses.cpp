class Solution {
public:
    void fun(int o,int c,string a,vector<string> &ans){
        if(o == 0 && c == 0){
            ans.push_back(a);
            return;
        }
        if(o > 0){
            fun(o-1,c,a+"(",ans);
        }
        if(c > o){
            fun(o,c-1,a+")",ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        fun(n,n,"",ans);
        return ans;
    }
};