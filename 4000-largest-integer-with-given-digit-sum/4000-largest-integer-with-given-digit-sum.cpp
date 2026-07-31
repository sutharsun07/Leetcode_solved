class Solution {
public:
    int largestInteger(int n, int s) {
        if(s == 0){
            return 0;
        }
        if(n*9<s){
            return -1;
        }
        if(s<10){
            int ans=s;
            n--;
            while(n-->0){
                ans=ans*10;
            }
            return ans;
        }
        int a=0;
        while(s > 8 && n > 0 ){
            a = a*10 + 9;
            s=s-9;
            n--;
        }
        while( s > 0 || n > 0 ){
            a = a * 10 + s;
            s=0;
            n--;
        }
        return a;
    }
};