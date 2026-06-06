class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2 == 0){
                ans.insert(ans.begin(),0);
            }
            else{
                ans.push_back(1);
            }
        }
        return ans;
    }
};