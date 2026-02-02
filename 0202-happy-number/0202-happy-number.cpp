class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> ins;
        while(n!=1 && ins.find(n)==ins.end()){
            ins.insert(n);
            int num=0;
            while(n!=0){
                int d=n%10;
                num+=d*d;
                n/=10;
            }
            n=num;
        }
        return (n==1); 
    }
};