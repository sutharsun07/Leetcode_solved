class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> even,odd,ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2 == 0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        int a=0,b=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                ans.push_back(even[a++]);
            }
            else{
                ans.push_back(odd[b++]);
            }
        }
        return ans;
    }
};