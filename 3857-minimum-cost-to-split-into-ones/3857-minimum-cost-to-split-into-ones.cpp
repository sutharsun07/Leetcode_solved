class Solution {
public:
    int minCost(int n) {
        if(n == 1){
            return 0;
        }
        int ans=0;
        for(int i=1;i<n;i++){
            ans+=i;
        }
        return ans;
    }
};