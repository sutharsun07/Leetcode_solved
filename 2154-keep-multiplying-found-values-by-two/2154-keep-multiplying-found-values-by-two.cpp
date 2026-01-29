class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> ans(nums.begin(),nums.end());
        if(!ans.count(original)){
            return original;
        }
        for(int i=0;i<nums.size();i++){
            if(!ans.count(original)){
                return original;
            }
            original=original*2;
        }
        return original;
    }
};