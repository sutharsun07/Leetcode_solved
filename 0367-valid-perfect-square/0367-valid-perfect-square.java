class Solution {
    public boolean isPerfectSquare(int num) {
        if(num==1 || num==4){
            return true;
        }
        for(int i=1;i<=num/3;i++){
            if(i*i==num){
                return true;
            }
        }
        return false;
}
}