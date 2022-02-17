class Solution {
public:
    int fib(int n) {
        int bef0=0, bef1=1, ret=0;
        if(n>2){
             n++;
             for(int i=2; i<n; i++){
                ret = bef0 + bef1;
                bef0=bef1;
                bef1 = ret;
            }
            return ret;
        }
        else if(n==0){
            return 0;
        }
        else{
           return 1;
        }
    }
};

/*
// Recursive
class Solution {
public:
    int fib(int n) {
        if(n > 2){
            return fib(n-1)+fib(n-2);
        }
        else if(n>0){
            return 1;
        }
        return 0;
    }
};

*/