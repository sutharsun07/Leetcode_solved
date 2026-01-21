class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int len=nums1.length+nums2.length;
        int[] s=new int[len];
        int a=0;
        for(int i=0;i<nums1.length;i++){
            s[i]=nums1[i];
            a++;
        }
        for(int i=0;i<nums2.length;i++){
            s[a]=nums2[i];
            a++;
        }
        Arrays.sort(s);
        if(len%2 != 0){
            return s[len/2];
        }
        else{
            return (float)(s[len/2]+s[len/2-1])/2;
        }
    }
}