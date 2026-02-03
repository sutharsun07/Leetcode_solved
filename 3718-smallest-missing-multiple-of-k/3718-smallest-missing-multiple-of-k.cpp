class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> ans;
        for(int i=0;i<nums.size();i++){
            ans.insert(nums[i]);
        }
        int s=k;
        for(int i=0;i<nums.size();i++){
            if(ans.find(k)==ans.end()){
                return k;
            }
            k+=s;
        }
        return k;
    }
};