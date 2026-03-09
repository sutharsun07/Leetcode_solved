class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        bool fp=true;
        int first=0;
        int second=0;
        for(int i=0;i<nums.size();i++){
            if((i+1) % 6 == 0){
                if(fp == true){
                    fp=false;
                }
                else{
                    fp=true;
                }
            }
            if(nums[i]%2 != 0){
                if(fp == true){
                    fp=false;
                }
                else{
                    fp=true;
                }
            }
            if(fp == true){
                first+=nums[i];
            }
            else{
                second+=nums[i];
            }
        }
        return first-second;
    }
};