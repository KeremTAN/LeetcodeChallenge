class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<char> str(26,0);
        vector<char> trt(26,0);
        int ret=1000;
        for(char& c : s)
            str[c-'a']+=1;
        for(char& c : target)
            trt[c-'a']+=1;
        for(char& c : target){
           if(ret>(str[c-'a']/trt[c-'a'])){
                ret=(str[c-'a']/trt[c-'a']);
            }
        }
        return ret;
    }
};