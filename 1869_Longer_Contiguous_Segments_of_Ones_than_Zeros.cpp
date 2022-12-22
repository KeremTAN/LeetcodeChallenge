class Solution {
public:
    bool checkZeroOnes(string s) {
        int m1=0, m0=0, c1=0, c0=0;
        char bfr=s[0];
        for(int i=0; i<s.size(); i++){
            if(s[i]!='0'){
                c1++;
                if(c0>m0) m0=c0;
                c0=0;
            }
            else{
                c0++;
                if(c1>m1) m1=c1;
                c1=0;
            }
        }
        if(c0>m0) m0=c0;
        if(c1>m1) m1=c1;

        return m1 > m0 ? 1 : 0;
    }
};