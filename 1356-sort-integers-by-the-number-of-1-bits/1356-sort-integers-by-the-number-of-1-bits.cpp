class Solution {
public:
    static bool compare(int a,int b){
        int abit=__builtin_popcount(a);
        int bbit=__builtin_popcount(b);
        if(abit == bbit){
            return a<b;
        }
        return abit<bbit;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),compare);
        return arr;
    }
};