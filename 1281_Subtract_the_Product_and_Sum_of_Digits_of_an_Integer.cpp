class Solution {
public:
    int subtractProductAndSum(int n) {
        int mul=1, sum=0, tmp;
        while(n>0){
            tmp=n%10;
            n/=10;
            mul*=tmp;
            sum+=tmp;
        }
        return mul-sum;
    }
};