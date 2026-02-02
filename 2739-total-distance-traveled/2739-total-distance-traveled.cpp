class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int ans=0;
        int used=0;
        for(int i=1;i<=mainTank;i++){
            used++;
            if(used%5==0 && additionalTank!=0){
                mainTank++;
                additionalTank--;
            }
        }
        ans=(mainTank)*10;
        return ans;
    }
};