class Solution {
public:
    bool hasMatch(string s, string p) {
        if(p == "*"){
            return true;
        }
        string left="";
        string right="";
        int i=0;
        while(p[i] != '*'){
            left+=p[i];
            i++;
        }
        i++;
        while(i<p.size()){
            right+=p[i];
            i++;
        }
        int a=s.find(left);
        int b=s.rfind(right);
        if(a == -1 || b == -1){
            return false;
        }
        if(b<a+left.size()){
            return false;
        }
        return true;
    }
};