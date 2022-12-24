class Solution {
public:
    char findTheDifference(string s, string t) {
        int i=0, ss=0, st=0;
        for(; i<s.size(); i++){
            ss+=s[i];
            st+=t[i];
        }
        st+=t[i];
        return st-ss;
    }
};