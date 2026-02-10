class Solution {
public:
    int countMonobit(int n) {
        int ans=1;
        if(n==1){
            return 2;
        }
        int i=1;
        int a=2;
        while(i<n){
            if(i==a-1){
                a*=2;
                ans++;
            }
            i++;
        }
        return ans;
    }
};