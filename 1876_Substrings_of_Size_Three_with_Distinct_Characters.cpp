class Solution {
public:
    int countGoodSubstrings(string s) {
        int ret=0;
        if(s.size()>2) {    
            for(int i=0; i<s.size()-2; i++){
                if(s[i] == s[i+1] || s[i] == s[i+2] || s[i+1] == s[i+2]) { continue; }
                ret++;     
            }
        }
        return ret;
        
    }
};