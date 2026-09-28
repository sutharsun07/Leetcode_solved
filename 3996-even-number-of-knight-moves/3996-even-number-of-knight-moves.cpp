class Solution {
public:
    bool canReach(vector<int>& s, vector<int>& t) {
        int a=s[0]+s[1];
        int b=t[0]+t[1];
        if(a%2 == b%2){
            return true;
        }
        return false;
    }
};