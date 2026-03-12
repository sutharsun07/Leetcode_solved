class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> checker;
        int count=0;
        for(int i=0;i<heights.size();i++){
            checker.push_back(heights[i]);
        }
        sort(checker.begin(),checker.end());
        for(int i=0;i<heights.size();i++){
            if(heights[i] != checker[i]){
                count++;
            }
        }
        return count;
    }
};