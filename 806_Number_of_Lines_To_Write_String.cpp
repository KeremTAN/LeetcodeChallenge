class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int line=1, wide=0;
        
        for(const char& c : s){
            if(widths[c-97]+wide>100){
                wide=0;
                line++;
            }
            wide+=widths[c-97];
        }
        
        return {line, wide};
    }
};