class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int ret = 0;
        bool isBroken;
        std::vector<string> words;
        std::vector<char> chars;
        split(words, text);
        for(char& b : brokenLetters)
            chars.push_back(b);
        
        for(string& w : words) {
            isBroken = false;
            for(char& s : w) {
                if (isBroken)
                    break;
                for(char& c : chars) {
                    if(c==s) {
                        ret++;
                        isBroken = true;
                        break;
                    }
                }
            }
        }
        return words.size()-ret;
    }
    void split(vector<string>& words, string& text){
        string tmp;
        for(int i=0; i<text.size(); i++){
            if(text[i] != ' ')
                tmp+=text[i];
            else{
                words.push_back(tmp);
                tmp="";
            }
        }
        words.push_back(tmp);
    }
};