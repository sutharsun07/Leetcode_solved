class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int max=nums[i];
            int a=1;
            for(int j=i;j<nums.size();j++){
                if(nums[j] > max){
                    ans.push_back(nums[j]);
                    a=0;
                    break;
                }
            }
            if(a == 1){
                for(int k=0;k<i;k++){
                    if(nums[k] > max){
                        ans.push_back(nums[k]);
                        a=0;
                        break;
                    }
                }
            }
            if(a == 1){
                ans.push_back(-1);
            }
            
        }
        return ans;
    }
};