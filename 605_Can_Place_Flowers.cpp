class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        if(n==0)
            return 1;
        
        int empty= f[0]!=1 ? 1 : 0;
        for(const auto& i : f){
            if(i){
                n -= ((empty-1)/2);
                empty=0;
            }
            else { empty++; }
        }

        n-=(empty/2);

        return n<1;
    }
};