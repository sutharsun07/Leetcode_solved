class Solution {
    public long[] sumOfThree(long num) {
        long x=(num-3)/3;
        if((num-3)%3!=0) return new long[]{};
        return new long[]{x,x+1,x+2};
    }
}