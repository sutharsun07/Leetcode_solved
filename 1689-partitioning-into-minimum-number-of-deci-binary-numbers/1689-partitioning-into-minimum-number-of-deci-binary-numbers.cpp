class Solution {
public:
    int minPartitions(string n) {
        int binarymax=0;
        for(int i=0;i<n.size();i++){
            binarymax=max(binarymax,n[i] - '0');
        }
        return binarymax;
    }
};