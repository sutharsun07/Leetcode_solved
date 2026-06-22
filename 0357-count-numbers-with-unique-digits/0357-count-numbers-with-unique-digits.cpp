class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0){
            return 1;
        }
        int ans=10;
        int a=9;
        int curr=9;
        for(int i=2;i<=n;i++){
            curr*=a;
            ans+=curr;
            a--;
        }
        return ans;
    }
};