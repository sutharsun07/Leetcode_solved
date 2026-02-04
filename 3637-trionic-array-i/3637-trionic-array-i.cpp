class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n=nums.size();
        int a=0;
        while(a+1<n && nums[a+1]>nums[a]){
            a++;
        }
        if(a==0){
            return false;
        }
        int b=a;
        while(a+1<n && nums[a+1]<nums[a]){
            a++;
        }
        if(b==a){
            return false;
        }
        int c=a;
        while(a+1<n && nums[a+1]>nums[a]){
            a++;
        }
        if(c==a){
            return false;
        }
        if(a==n-1){
            return true;
        }
        return false;
    }
};