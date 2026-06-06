class Solution {
public:
    int mirrorDistance(int n) {
        int rev=0;
        int num=n;
        while(num != 0){
            int dig=num%10;
            rev=rev*10+dig;
            num/=10;
        }
        return abs(n-rev);
    }
};