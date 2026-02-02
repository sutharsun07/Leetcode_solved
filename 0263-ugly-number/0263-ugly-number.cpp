class Solution {
public:
    bool isUgly(int n) {
        if(n==1){
            return true;
        }
        if(n==0){
            return false;
        }
        while(n!=1){
            int a=0;
            if(n%2==0){
                n/=2;
                a=1;
            }
            if(n%3==0){
                n/=3;
                a=1;
            }
            if(n%5==0){
                n/=5;
                a=1;
            }
            if(a==0){
                return false;
            }
        }
        return true;
    }
};