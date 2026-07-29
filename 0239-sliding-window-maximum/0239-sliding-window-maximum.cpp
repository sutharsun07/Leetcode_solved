class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int> pq;
        vector<int> ans;
        int left=0;
        for(int i=0;i<k;i++)
        {
            pq.insert(nums[i]);
        }
        ans.push_back(*pq.rbegin());

        for(int r=k;r<nums.size();r++)
        {
            
            pq.erase(pq.find(nums[r-k]));
            pq.insert(nums[r]);
            left++;
            ans.push_back(*pq.rbegin());

        }
        return ans;
    }
};
