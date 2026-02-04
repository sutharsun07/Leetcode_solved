class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int s1=0;
        int s2=0;
        for(int i=0;i<nums.size();i++){
            int c=0;
            int ans=nums[i];
            while(nums[i] != 0){
                c++;
                nums[i]/=10;
            }
            if(c==1){
                s1+=ans;
            }
            else{
                s2+=ans;
            }
        }
        if(s1 == s2){
            return false; 
        }
        else{
            return true;
        }
    }
};