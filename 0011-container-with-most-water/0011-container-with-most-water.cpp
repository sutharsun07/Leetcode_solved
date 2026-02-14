class Solution {
public:
    int maxArea(vector<int>& height) {
        int max1=0;
        int l=0;
        int r=height.size()-1;
        while(l<r){
            max1=max(max1,min(height[l],height[r])*(r-l));
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return max1;
    }
};