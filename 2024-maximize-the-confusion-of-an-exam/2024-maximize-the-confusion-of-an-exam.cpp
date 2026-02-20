class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int l=0;
        int t=0;
        int f=0;
        int ans=0;
        for(int i=0;i<answerKey.size();i++){
            if(answerKey[i]=='T'){
                t++;
            }
            while(t>k){
                if(answerKey[l] == 'T'){
                    t--;
                }
                l++;
            }
            ans=max(ans,i-l+1);
        }
        l=0;
        for(int i=0;i<answerKey.size();i++){
            if(answerKey[i]=='F'){
                f++;
            }
            while(f>k){
                if(answerKey[l] == 'F'){
                    f--;
                }
                l++;
            }
            ans=max(ans,i-l+1);
        }
        return ans;
    }
};