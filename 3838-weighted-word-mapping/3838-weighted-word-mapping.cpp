class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string a="";
        for(string i:words){
            int sum=0;
            for(char j:i){
                sum+=weights[j-'a'];
            }
            sum%=26;
            sum=26-sum-1;
            a+=sum+'a';
        }
        return a;
    }
};