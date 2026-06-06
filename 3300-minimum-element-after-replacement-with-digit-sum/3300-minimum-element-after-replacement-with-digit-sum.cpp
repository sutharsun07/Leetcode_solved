class Solution {
public:
    int minElement(vector<int>& nums) {
        int mn=nums[0];
        for(int i=0;i<nums.size();i++){
            int ans=0;
            while(nums[i] != 0){
                ans+=nums[i]%10;
                nums[i]/=10;
            }
            mn=min(mn,ans);
        }
        return mn;
    }
};