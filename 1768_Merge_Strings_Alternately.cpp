class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int mx= max(word1.length(), word2.length());
        int mn= min(word1.length(), word2.length());
        int i=0;
        string ret;
        while(i<mn){
            ret+=word1[i];
            ret+=word2[i++];
        }
        string* ptr = word1.length() > word2.length()? &word1 : &word2;
        while(i<mx){
            ret+= (*ptr)[i++];
        }
       return ret; 
    }
};