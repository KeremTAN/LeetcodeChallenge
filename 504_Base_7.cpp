class Solution {
public:
    string convertToBase7(int num) {
        int bs7{};
        bool isNeg = num<0;
        string ret{};

        if(isNeg) 
            num*=-1;
        
        while(num>6){
            ret+=to_string(num%7);
            num/=7;
        }
        ret+=to_string(num);
        
        if(isNeg)
            return "-"+string(ret.rbegin(), ret.rend());

        return string(ret.rbegin(), ret.rend());
    }
};