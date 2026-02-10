class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int c=0;
        int l=0;
        for(int i=0;i<nums.size()-1;i++){
            l+=nums[i];
            int r=sum-l;
            if((r-l)%2 == 0){
                c++;
            }
        }
        return c;
    }
};