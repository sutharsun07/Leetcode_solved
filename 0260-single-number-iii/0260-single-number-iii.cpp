class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        int c=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();){
            if(i==nums.size()-1 || nums[i] != nums[i+1]){
                ans.push_back(nums[i]);
                i++;
                c++;
            }
            else{
                i+=2;
            }
            if(c==2){
                break;
            }
        }
        return ans;
    }
};