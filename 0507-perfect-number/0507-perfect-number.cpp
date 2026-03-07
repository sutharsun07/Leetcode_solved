class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=1;
        if(num == 1){
            return false;
        }
        for(int i=2;i*i <= num;i++){
            if(num%i == 0){
                if(i == num/i){
                    sum+=i;
                }
                else{
                  sum+=(i + num/i);
                }
            }
        }
        return sum == num;
    }
};