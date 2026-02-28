class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        string ans="";
        while(word1[i] != '\0' && word2[i] != '\0'){
            ans+=word1[i];
            ans+=word2[i];
            i++;
        }
        while(i<word1.size()){
            ans+=word1[i];
            i++;
        }
        while(i<word2.size()){
            ans+=word2[i];
            i++;
        }
        return ans;
    }
};