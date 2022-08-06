class Solution {
public:
    int totalMoney(int n) {
        int i=0, ret=0;
        
        for(; i<n/7; i++)
            ret+=(28+(7*i));
        
        for(int j=1; j<=n%7; j++)
            ret+=(j+i);
        
        return ret;
    }
};