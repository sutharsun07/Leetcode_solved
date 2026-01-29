class Solution {
    public int dominantIndex(int[] nums) {
        int[] a=new int[nums.length];
        for(int i=0;i<nums.length;i++){
            a[i]=nums[i];
        }
        Arrays.sort(nums);
        int a1=nums[nums.length-1];
        if(a1<nums[nums.length-2]*2){
            return -1;
        }
        for(int i=0;i<a.length;i++){
            if(a[i]==a1){
                return i;
            }
        }
        return -1;
    }
}