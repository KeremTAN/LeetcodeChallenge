class Solution {
public:
    bool isSubsequence(string s, string t) {
        int si{};

        for(int i{}; i<t.size(); i++){
            if(t[i]==s[si]){
                si++;
            }
        }
        return si==s.size();
    }
};