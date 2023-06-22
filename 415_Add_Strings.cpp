class Solution {
public:
    string addStrings(string num1, string num2) {
        string ret;
        if(num1.size() < num2.size())
            add(num2, num1, ret);
        else add(num1, num2, ret);

        reverse(ret.begin(), ret.end());
        return ret;
    }
    void add(const string& lng, const string& shrt, string& ret){
        int carry{}, lix=lng.size()-1;

        for(int six=shrt.size()-1; six>-1; six--){
            int digit = lng[lix--]+shrt[six]+r-96;
            ret+= ((digit%10)+48);
            carry = digit <10 ? 0 : digit/10;
        }
        
        while(lix>-1){
            int digit = lng[lix--]-48+r;
            ret+=((digit%10)+48);
            carry = digit <10 ? 0 : digit/10;
        }
        if(carry!=0)
            carry+=(r+48);
    }
};