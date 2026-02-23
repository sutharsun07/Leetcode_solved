class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        int max1=nums[0];
        int max2=INT_MIN+1;
        int max3=INT_MIN+1;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != max1){
                max2=nums[i];
                break;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i] != max1  &&  nums[i] != max2){
                max3=nums[i];
                break;
            }
        }
        if(max3 != INT_MIN+1){
            return max3;
        }
        return max1;
    }
};