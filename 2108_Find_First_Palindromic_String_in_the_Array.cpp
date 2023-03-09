class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        for(string& word : words){
            if(isPalindromic(word))
                return word;
        }
        return "";
    }
    bool isPalindromic(string& s){
        int i=0, j=s.size()-1;
        while(i < j){
            if(s[i]!=s[j])
                return 0;
            i++;
            j--;
        }
        return 1;
    }
};