class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> first(26,0);
        vector<int> second(26,0);
        if(s.size() != t.size()){
            return false;
        }
        for(char i : s){
            first[i - 'a']++;
        }
        for(char i : t){
            second[i - 'a']++;
        }
        return first == second;
    }
};