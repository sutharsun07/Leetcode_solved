class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int mx=0;
        for(int x:s){
            if(!s.contains(x-1)){
                int i=x;   
                int c=1;
                while(i!=INT_MAX && s.contains(i+1)){
                    c++;
                    i++;
                }
                mx=max(mx,c);
            }
        }
        return mx;
    }
};