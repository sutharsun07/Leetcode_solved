class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n=arr.size();
        if(k>=n){
            return *max_element(arr.begin(),arr.end());
        }
        int w=0;
        int max=arr[0];
        for(int i=1;i<arr.size();i++){
            if(max>arr[i]){
                w++;
            }
            else{
                max=arr[i];
                w=1;
            }
            if(w == k){
                return max;
            }
        }
        return -1;
    }
};