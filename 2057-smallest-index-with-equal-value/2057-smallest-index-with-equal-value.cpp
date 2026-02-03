class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]%10==i){
                return i;
            }
        }
        return -1;
    }
};