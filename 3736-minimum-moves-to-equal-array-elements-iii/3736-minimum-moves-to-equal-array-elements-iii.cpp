class Solution {
public:
    int minMoves(vector<int>& nums) {
        int moves=0;
        int max=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
            }
        }
        for(int i=0;i<nums.size();i++){
            int a=max-nums[i];
            moves+=a;
        }
        return moves;
    }
};