class Solution {
public:
    bool checkString(string s) {
        int a=0;
        for(int i=0;s[i] != '\0';i++){
            if(s[i] == 'b'){
                a=1;
            }
            if(a == 1 && s[i]=='a'){
                return false;
            }
        }
        return true;
    }
};