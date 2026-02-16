class Solution {
public:
    int reverseBits(int n) {
        unsigned int ans=0;
        for(int i=0;i<32;i++){
            unsigned int bit=(n&1);
            ans=ans|bit;
            n>>=1;
            ans<<=1;
        }
        return (ans>>1);
    }
};