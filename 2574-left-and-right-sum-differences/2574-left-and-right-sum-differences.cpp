class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        if(nums.size() == 1){
            return {0};
        }
        vector<int> leftsum(nums.size());
        vector<int> rightsum(nums.size());
        int sum=0;
        leftsum[0]=sum;
        for(int i=0;i<nums.size()-1;i++){
            sum+=nums[i];
            leftsum[i+1]=sum;
        }
        sum=0;
        rightsum[nums.size()-1]=sum;
        for(int i=nums.size()-2;i>=0;i--){
            sum+=nums[i+1];
            rightsum[i]=sum;
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=abs(leftsum[i]-rightsum[i]);
        }
        return nums;
    }
};