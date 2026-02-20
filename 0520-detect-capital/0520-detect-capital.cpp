class Solution {
public:
    bool detectCapitalUse(string word) {
        if(islower(word[0])){
            for(int i=0;word[i] != '\0';i++){
                if(!islower(word[i])){
                    return false;
                }
            }
        }
        else if(isupper(word[0]) && islower(word[1])){
            for(int i=1;word[i] != '\0';i++){
                if(!islower(word[i])){
                    return false;
                }
            }
        }
        else{
            for(int i=0;word[i] != '\0';i++){
                if(!isupper(word[i])){
                    return false;
                }
            }
        }
        return true;
    }
};