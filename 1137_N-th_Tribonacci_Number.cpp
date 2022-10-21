class Solution {
public:
    int tribonacci(int n) {
        if(n<3)
            return n!=0 ? 1 : 0;
        int t0=0, t1=1, t2=1, ret=0;
        for(int i=2; i<n; i++){
            ret=t0+t1+t2;
            t0=t1;
            t1=t2;
            t2=ret;
        }
        return ret;
    }
};