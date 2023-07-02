class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits.back()++;
        if(digits.back()>9) {
            int carry{};
            for(int ix = digits.size()-1; ix>-1; ix--){
                int n = digits[ix]+carry;
                digits[ix]= n%10;
                carry = n<10 ? 0 : n/10;
            }
            if(carry)
                digits.insert(digits.begin(), carry);
        }
        return digits;
    }
};