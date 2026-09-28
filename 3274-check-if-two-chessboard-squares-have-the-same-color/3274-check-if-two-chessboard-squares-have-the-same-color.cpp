class Solution {
public:
    bool checkTwoChessboards(string c1, string c2) {
        int a=int(c1[0]);
        int b=int(c1[1]);
        int c=int(c2[0]);
        int d=int(c2[1]);
        int ans1=int(a-'a')+b;
        int ans2=int(c-'a')+d;
        return  ans1%2 == ans2%2;
    }
};