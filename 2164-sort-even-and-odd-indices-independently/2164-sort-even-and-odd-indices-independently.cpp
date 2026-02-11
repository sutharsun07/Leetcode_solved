class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> a;
        vector<int> b;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2 == 0){
                a.push_back(nums[i]);
            }
            else{
                b.push_back(nums[i]);
            }
        }
        sort(a.begin(),a.end());
        sort(b.rbegin(),b.rend());
        int a1=0;
        int b1=0;
        for(int i=0;i<nums.size();i++){
            nums[i]=a[a1++];
            nums[++i]=b[b1++];
        }
        return nums;
    }
};