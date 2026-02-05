class Solution {
public:
    int xorOperation(int n, int start) {
        int ans=0;
        for(int i=0;i<n;i++){
            int a=start+2*i;
            ans^=a;
        }
        return ans;
    }
};