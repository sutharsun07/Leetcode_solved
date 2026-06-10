class Solution {
public:
    bool check(vector<int>& nums) {
        int ans=0;
        if(nums.size() <=2 ){
            return true;
        }
        if(nums[nums.size()-1] > nums[0]){
            ans++;
        }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] > nums[i+1]){
                ans++;
            }
        }
        return ans==0 || ans==1;
    }
};