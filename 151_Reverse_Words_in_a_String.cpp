class Solution {
public:
    string reverseWords(string s) {
        string ret{};
        int fi=s.size()-1, li=s.size()-1;

        while(fi>-1){
            while(fi >-1 && s[fi]==' ') fi--;
            li=fi;

            while(fi >-1 && s[fi]!=' ') fi--;

            if(string_view(s.data() + fi+1, li-fi) != "")
                ret+=s.substr( fi+1, li-fi)+" ";

            fi--;
        }
        
        return ret.substr(0, ret.size()-1);   
    }
};