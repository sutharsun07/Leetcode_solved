class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char a='z';
        int s=0;
        for(int i=0;i<letters.size();i++){
            if(letters[i]>target && letters[i]<a){
                a=letters[i];
                s=1;
            }
        }
        if(s==0){
            return letters[0];
        }
        return a;
    }
};