class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        if(password.size()<8) return 0;
        
        bool l=0, u=0, d=0, s=0;
        char b =-1;
        for(const char& c : password){
            if(b==c) return 0;
            if(c>96 && c<123)
                l=1;
            else if(c>64 && c<91)
                u=1;
            else if(c>47 && c<58)
                d=1;
            else if((c>32 && c<48) || c=='^' || c=='@')
                s=1;
            b=c;
        }
        return (l && u && d && s);
    }
};