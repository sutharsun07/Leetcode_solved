class Solution {
    public int[] getConcatenation(int[] nums) {
        int[] ans=new int[nums.length + nums.length];
        int a=0;
        for(int i=0;i<nums.length;i++){
            ans[a]=nums[i];
            a++;
        }
        for(int i=0;i<nums.length;i++){
            ans[a]=nums[i];
            a++;
        }
        return ans;
    }
}