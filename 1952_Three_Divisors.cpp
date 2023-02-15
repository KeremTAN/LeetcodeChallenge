class Solution {
public:
    bool isThree(int n) {
        int ret = 1;
        if(n<3) return 0;
        for(int i=2; i<n; i++){
            if(n%i==0){
                if(ret==0) return 0;
                ret--;
            }
        }
        return ret>0 ? 0 : 1;
    }
};