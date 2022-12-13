class Solution {
public:
    int hammingDistance(int x, int y) {
        x = x^y;
        y = 0;
        while(x){
            if(x&1) y++;
            x>>=1;
        }
        return y;
    }
};