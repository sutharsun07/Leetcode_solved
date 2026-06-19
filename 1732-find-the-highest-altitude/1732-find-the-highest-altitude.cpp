class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> ans;
        ans.push_back(0);
        int sum=0;
        int mx=0;
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
            mx=max(mx,sum);
        }
        return mx;
    }
};