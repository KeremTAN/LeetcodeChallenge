class Solution {
public:
    bool hasAlternatingBits(int n) {
        char bfr=n%2;
        n>>=1;
        while(n)
            if(bfr!=(n%2)){
                bfr=n%2;
                n>>=1;
            }
            else return 0;
        return 1;
    }
};