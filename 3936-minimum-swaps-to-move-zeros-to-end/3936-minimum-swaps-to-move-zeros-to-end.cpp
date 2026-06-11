class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int count=0;
        for(int i:nums){
            if(i == 0){
                count++;
            }
        }
        int zcount=0;
        int c=count;
        int j=nums.size()-1;
        while(c--){
            if(nums[j] == 0){
                zcount++;
            }
            j--;
        }
        return count-zcount;
    }
};