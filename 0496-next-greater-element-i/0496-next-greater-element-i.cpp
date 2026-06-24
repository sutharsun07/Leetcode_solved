class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            int mx=nums1[i];
            int k=0;
            for(int j=0;j<nums2.size();j++){
                if(mx == nums2[j]){
                    k=1;
                }
                if(k==1){
                    mx=max(mx,nums2[j]);
                    if(mx != nums1[i]){
                        break;
                    }
                }
            }
            if(mx == nums1[i]){
                ans.push_back(-1);
            }
            else{
                ans.push_back(mx);
            }
        }
        return ans;
    }
};