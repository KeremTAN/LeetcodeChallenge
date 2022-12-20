class Solution {
public:
    string oddString(vector<string>& words) {
        int wSize = words[0].size(), size=words.size(), i=0;
        unsigned int tmp=0, bfr=-1;
        for(; i<size; i++){
            for(int j=1; j<wSize; j++){
                tmp=(tmp*10)+((words[i][j])-(words[i][j-1]));
            }
            if(bfr!=-1) {
                if(bfr!=tmp){
                    break;
                }
            }
            else bfr=tmp;
            tmp=0;
        }
        if(i!=1)
            return words[i];

        tmp=0;
        for(int j=1; j<wSize; j++)
            tmp=(tmp*10)+((words[2][j])-(words[2][j-1]));
        if(bfr!=tmp) return words[0];
        return words[1];
    }
};