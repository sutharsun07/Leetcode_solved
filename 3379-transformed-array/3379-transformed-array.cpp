class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int len=nums.size();
        vector<int> res(len);
        for(int i=0;i<len;i++){
            int k=(i+nums[i])%len;
            if(k<0){
                k+=len;
            }
            res[i]=nums[k];
        }
        return res;
    }
};