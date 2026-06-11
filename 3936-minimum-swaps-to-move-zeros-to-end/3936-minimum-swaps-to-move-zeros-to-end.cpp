class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int count=0;
        for(int i:nums){
            if(i == 0){
                count++;
            }
        }
        int j=nums.size()-1;
        int c=count;
        while(c--){
            if(nums[j] == 0){
                count--;
            }
            j--;
        }
        return count;
    }
};