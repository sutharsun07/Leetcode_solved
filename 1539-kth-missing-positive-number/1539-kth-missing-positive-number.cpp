class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int count=1;
        int ans=-1;
        for(int i=0;i<arr.size();){
            if(arr[i] == count){
                i++;
                count++;
            }
            else{
                count++;
                k--;
            }
            if(k == 0){
                ans=count-1;
                break;
            }
        }
        if(ans == -1){
            ans=count+k-1;
        }
        return ans;
    }
};