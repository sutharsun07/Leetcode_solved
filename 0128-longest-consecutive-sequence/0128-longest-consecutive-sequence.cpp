class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());

        int mx = 0;

        for (int x : s) {
            if (!s.contains(x - 1)) {
                int len = 1;
                int curr = x;

                while (curr != INT_MAX && s.contains(curr + 1)) {
                    curr++;
                    len++;
                }

                mx = max(mx, len);
            }
        }

        return mx;
    }
};