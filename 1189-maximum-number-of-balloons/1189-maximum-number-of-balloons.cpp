class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int b=0;
        int a=0;
        int l=0;
        int o=0;
        int n=0;
        for(char i:text){
            if(i=='b'){
                b++;
            }
            if(i=='a'){
                a++;
            }
            if(i=='l'){
                l++;
            }
            if(i=='o'){
                o++;
            }
            if(i=='n'){
                n++;
            }
        }
        int ans=0;
        return min({b,n,l/2,o/2,a});
    }
};