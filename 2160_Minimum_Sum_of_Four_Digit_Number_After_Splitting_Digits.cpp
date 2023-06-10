class Solution {
public:
    int minimumSum(int num) {
        vector<int> v={num%10};
        
        while( num/=10){
            v.insert(lower_bound(v.begin(), v.end(), num%10), num%10);
        }   
        return (v[0]*10+v[3]) + (v[1]*10 +v[2]);
    }
};