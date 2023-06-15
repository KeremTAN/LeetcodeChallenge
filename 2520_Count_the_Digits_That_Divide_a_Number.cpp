class Solution {
public:
    int countDigits(int num) {
        int tmp {num}, ret{};
        while(tmp){
            if(num%(tmp%10)==0)
                ret++;
            tmp/=10;
        }
        return ret;
    }
};