class Solution {
public:
    int first(long long a){
        while(a>9){
            a/=10;
        }
        return a;
    }
    int countValidSubarrays(vector<int>& nums, int x) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            long long sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                if(sum%10==x && first(sum)==x){
                    ans+=1;
                }
            }
        }
        return ans;
    }
};