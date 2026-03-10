class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        long long sum=0;
        sort(nums.begin(),nums.end());
        int count=1;
        for(int i=0;i<nums.size();){
            if(nums[i] < count){
                i++;
            }
            else if(count == nums[i]){
                i++;
                count++;
            }
            else{
                sum+=count;
                count++;
                k--;
            }
            if(k == 0){
                break;
            }
        }
        while(k != 0){
            sum+=count;
            count++;
            k--;
        }
        return sum;
    }
};