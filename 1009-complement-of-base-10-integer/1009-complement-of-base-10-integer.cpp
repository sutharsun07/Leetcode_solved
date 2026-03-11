class Solution {
public:
    int bitwiseComplement(int n) {
        string s="";
        if(n == 0){
            return 1;
        }
        while(n != 0){
            int bit=n%2;
            if(bit == 0){
                s="1"+s;
            }
            else{
                s="0"+s;
            }
            n/=2;
        }
        return stoi(s,nullptr,2);
    }
};