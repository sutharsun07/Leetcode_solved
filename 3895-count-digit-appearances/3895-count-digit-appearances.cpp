class Solution {
public:
    int c(int a,int d){
        int c1=0;
        while(a != 0){
            int dig=a%10;
            if(dig == d){
                c1++;
            }
            a/=10;
        }
        return c1;
    }
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            count+=c(nums[i],digit);
        }
        return count;
    }
};