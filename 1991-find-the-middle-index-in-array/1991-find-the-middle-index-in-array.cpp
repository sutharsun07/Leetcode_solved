class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int> rightsum(nums.size());
        int sum=0;
        rightsum[nums.size()-1]=sum;
        for(int i=nums.size()-2;i>=0;i--){
            sum+=nums[i+1];
            rightsum[i]=sum;
        }
        sum=0;
        for(int i=0;i<nums.size();i++){
            if(sum == rightsum[i]){
                return i;
            }
            sum+=nums[i];
        }
        return -1;
    }
};