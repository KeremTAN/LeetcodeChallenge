class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ret=0;
        do{
            if(n&1)
                ret++;
        } while(n>>=1);
        return ret;
    }
};