class Solution {
public:
    bool detectCapitalUse(string word) {
        int size=word.size();

        if(size<2) return true;

        for(int i=0; i<size-1; i++){
            if(word[i]>96 && word[i+1]<91)
                return false;
            if(word[i+1]>96 && word[i]<91)
                if(i!=0)
                    return false;
        }
        return true;
    }
};