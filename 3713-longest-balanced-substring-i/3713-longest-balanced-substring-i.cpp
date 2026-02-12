class Solution {
public:
    int longestBalanced(string s) {
        int ans=1;
        for(int i=0;i<s.size();i++){
            vector<int> fr(26,0);
            for(int j=i;j<s.size();j++){
                fr[s[j]-'a']++;
                int a=-1;
                bool is=true;
                for(int k=0;k<26;k++){
                    if(fr[k]>0){
                        if(a==-1){
                            a=fr[k];
                        }
                        else if(a != fr[k]){
                            is=false;
                            break;
                        }
                    }
                }
                if(is)
                    ans=max(ans,j-i+1);
            }
        }
        return ans;
    }
};