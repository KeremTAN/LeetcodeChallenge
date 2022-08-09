class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int ret=1, i=0, s1 = sentence.size()+1, s2 = searchWord.size();
        while(i+s2<s1){
            if(string_view(sentence.c_str()+i, s2)==searchWord)
                return ret;       
            while(sentence[i++]!=32 && i<s1);   
            ret++;
        }
        return -1;
    }
};