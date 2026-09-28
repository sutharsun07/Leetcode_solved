class Solution {
public:
    bool squareIsWhite(string c) {
        int a=int(c[0]);
        int b=int(c[1]);
        int ans=int(a-'a')+b;
        return ans%2==0;
    }
};