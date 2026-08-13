class Solution {
public:
    bool validDigit(int n, int x) {
        int a=0;
        while(n > 9){
            if(n%10 == x){
                a=1;
            }
            n/=10;
        }
        if(n == x){
            a=0;
        }
        return a==1;
    }
};