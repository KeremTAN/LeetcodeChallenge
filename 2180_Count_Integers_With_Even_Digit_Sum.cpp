class Solution {
public:
    int countEven(int num) {
        int ret=0, tmp, i;
        num++;
        for(int j=2; j<num; j++){
            i=j;
            tmp=0;
            while(i>9){
                tmp += i%10;
                i/=10;
            }
            tmp+=i;
            if(tmp%2==0)
                ret++;
        }
        return ret;
    }
};