class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans1=nums.size();
        int l=0;
        for(int i=0;i<nums.size();i++){
            while(nums[i]>(long long)nums[l]*k){
                l++;
            }
            ans1=min(ans1,(int)nums.size()-(i-l+1));
        }
        return ans1;
    }
};