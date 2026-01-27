class Solution {
    public boolean isPalindrome(int x) {
         int num=x,d,sum=0;
        while(x != 0){
            d=x%10;
            sum=sum*10+d;
            x/=10;
        }
        if(sum==num&&num>=0){
            return true;
        }
        else{
            return false;
        }
    }
}