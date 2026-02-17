class Solution {
public:
    int reverse(int n){
        int rev=0;
        while(n != 0){
            int d=n%10;
            n/=10;
            rev=rev*10+d;
        }
        return rev;
    }
    bool isSameAfterReversals(int num) {
        int a=reverse(num);
        int b=reverse(a);
        return num==b;
    }
};