class Solution {
public:
    int mySqrt(int x) {
        cin.tie(NULL);
        
        long ret{x};
        while(ret*ret>x){
            ret = 0.5 * (ret + (x/ret));
        }
        return ret;
    }
};