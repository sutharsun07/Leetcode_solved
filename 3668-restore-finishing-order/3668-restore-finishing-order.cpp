class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> ans;
        set<int> s;
        for(int i=0;i<friends.size();i++){
            s.insert(friends[i]);
        }
        for(int i=0;i<order.size();i++){
            if(s.contains(order[i])){
                ans.push_back(order[i]);
            }
        }
        return ans;
    }
};