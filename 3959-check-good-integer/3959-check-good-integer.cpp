class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum=0;
        int ssum=0;
        int num=n;
        while(n!=0){
            sum+=n%10;
            n/=10;
        }
        while(num!=0){
            ssum+=(num%10)*(num%10);
            num/=10;
        }
        return (ssum-sum)>=50;
    }
};