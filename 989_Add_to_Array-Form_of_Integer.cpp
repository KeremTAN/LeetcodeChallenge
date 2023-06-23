class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int ix = num.size()-1, carry{};

        while(ix>-1){
            int digit = num[ix]+ (k%10) + carry;
            num[ix--]=(digit%10);
            
            carry = digit < 10 ? 0 : digit/10;
            k /=10;
        }

        while(k){
            int digit = (k%10) + carry;
            num.insert(num.begin(), (digit%10));
        
            carry = digit < 10 ? 0 : digit/10;
            k/=10;
        }

        if(carry)
            num.insert(num.begin(), carry);


        return num;
    }
};