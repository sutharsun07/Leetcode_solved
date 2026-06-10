class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> a;
        for(int i:nums){
            if(a.contains(i)){
                return true;
            }
            a.insert(i);
        }
        return false;
    }
};