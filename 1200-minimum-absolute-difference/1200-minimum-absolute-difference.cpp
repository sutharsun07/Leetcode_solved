class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int a=INT_MAX;
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++){
            a=min(a,arr[i+1]-arr[i]);
        }
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i+1]-arr[i]==a){
                ans.push_back({arr[i],arr[i+1]});
            }
        }
        return ans;    }
};