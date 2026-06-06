class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
        for(int i=nums.size()-1;i>=0;i--){
            ans.push_back(nums[i]);
        }
        return ans;
    }
};