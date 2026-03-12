class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=INT_MIN;
        int b=INT_MAX;
        int i;
        for(i=0;i<nums.size();i++){
            if(nums[i] > 0){
                b=nums[i];
                break;
            }
            a=nums[i];
        }
        if(i == nums.size()){
            return a;
        }
        if(a == INT_MIN){
            return b;
        }
        if(abs(a) < abs(b)){
            return a;
        }
        return b;
    }
};