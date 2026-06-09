class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long max=nums[0],min=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
            }
            if(nums[i]<min){
                min=nums[i];
            }   
        }
        return k*(max-min);
    }
};