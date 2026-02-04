class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int max1=nums1[0];
        int max2=nums2[0];
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]>max1){
                max1=nums1[i];
            }
            if(nums2[i]>max2){
                max2=nums2[i];
            }
        }
        return max2-max1;
    }
};