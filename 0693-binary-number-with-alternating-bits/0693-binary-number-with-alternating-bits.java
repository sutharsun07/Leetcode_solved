class Solution {
    public boolean hasAlternatingBits(int n) {
        int lastbit=-1;
        while(n>0){
            if((n&1)==lastbit){
                return false;
            }
            lastbit=n&1;
            n>>=1;
        }
        return true;
    }
}