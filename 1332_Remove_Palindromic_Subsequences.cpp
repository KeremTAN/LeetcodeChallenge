class Solution {
public:
    int removePalindromeSub(string s) {
        string t=s;
        std::reverse(t.begin(),t.end());
        if(t==s) return 1;
        return 2;
        
    }
};