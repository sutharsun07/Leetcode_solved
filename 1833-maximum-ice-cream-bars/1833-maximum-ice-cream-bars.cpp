class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int ans=0;
        int sum=0;
        sort(costs.begin(),costs.end());
        for(int i=0;i<costs.size();i++){
            sum+=costs[i];
            if(sum <= coins){
                ans++;
            }
            if(sum>coins){
                break;
            }
        }
        return ans;
    }
};