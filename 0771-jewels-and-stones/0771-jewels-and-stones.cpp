class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans=0;
        for(int i=0;jewels[i] != '\0';i++){
            int c=count(stones.begin(),stones.end(),jewels[i]);
            ans+=c;
        }
        return ans;
    }
};