class Solution {
public:
    bool isPalindrome(string s) {
        int i{}, j=s.size()-1;

        while(i < j){
           if(!isalnum(s[i])) i++;
           else if(!isalnum(s[j])) j--;
           else if(tolower(s[i++])!=tolower(s[j--]))
            return 0;
        }

        return 1;
    }
};