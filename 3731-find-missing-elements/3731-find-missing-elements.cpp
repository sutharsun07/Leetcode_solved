class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int max=*max_element(nums.begin(),nums.end());
        int min=*min_element(nums.begin(),nums.end());
        vector<int> ans;
        for(int i=min+1;i<max;i++){
            if(!(find(nums.begin(),nums.end(),i) != nums.end())){
                ans.push_back(i);
            }
        }
        return ans;
    }
};