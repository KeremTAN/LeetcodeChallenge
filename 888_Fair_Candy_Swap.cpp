class Solution {
public:
    vector<int> fairCandySwap(vector<int>& alice, vector<int>& bob) {
        int suma=0, sumb=0, d=0;
        for(int& i : alice)
            suma+=i;
        for(int& i : bob)
            sumb+=i;
        d=(sumb-suma)/2;
        unordered_set<int> bobs(bob.begin(), bob.end());
        for(int& a: alice){
            if(bobs.count(a+d))
            return {a,a+d};
        }
        return {};
    }
};