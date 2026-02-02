class Solution {
    public int[] productExceptSelf(int[] nums) {
        int m=1;
        int iszero=-1;
        int[] res=new int[nums.length];
        for(int i=0;i<nums.length;i++){
            if(nums[i]==0){
                iszero++;
            }
                if(nums[i]==0){
                    continue;
                }
            m*=nums[i];
        }
        if(iszero>=1){
            return res;
        }
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=0 && iszero == -1){
                nums[i]=m/nums[i];
            }
            else{
                if(nums[i]==0){
                    nums[i]=m;
                }
                else{
                    nums[i]=0;
                }
            }
        }
        return nums;
    }
}