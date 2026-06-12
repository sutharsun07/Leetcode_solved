class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long x=(num-3)/3;
        if((num-3)%3 !=0){
            return {};
        }
        return {x,x+1,x+2};
    }
};