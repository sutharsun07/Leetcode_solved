class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        vector<int> a(101,0);
        for(int i=0;i<nums.size();i++){
            a[nums[i]]++;
        }
        int b=0;
        while(b == 0){
            b=1;
            for(int i=0;i<101;i++){
                if(a[i] > 0){
                    ans.push_back(i);
                    a[i]--;
                    b=0;
                }
            }
        }
        return ans;
    }
};