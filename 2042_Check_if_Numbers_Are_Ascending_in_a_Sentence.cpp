class Solution {
public:
    bool areNumbersAscending(string s) {
        int tmp=0, before=-100, mx=1;
        for(char& c : s){
            if((int)c > 47 && (int)c < 58){
                if(tmp==-1){ tmp=0; }
                tmp = tmp*mx + c;
                mx *= 100;
            }
            if (tmp !=-1 && c==' '){     
                if(before >= tmp) { return false; }
                before=tmp;
                mx=1;
                tmp=-1;
            }    
        }
        if(before >= tmp && tmp !=-1){ return false; }
        return true;       
    }
};