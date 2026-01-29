class Solution {
public:
    int tribonacci(int n) {
        int t1=0;
        int t2=1;
        int t3=1;
        int tn=0;
        for(int i=3;i<=n;i++){
            tn=t1+t2+t3;
            t1=t2;
            t2=t3;
            t3=tn;
        }
        return tn;
    }
};