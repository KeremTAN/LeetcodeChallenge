class Solution {
public:
    int convertTime(string current, string correct) {
        int ret=0, digit=1, cur=0, cor=0, hour=1, i;
        int t[] = {59,14,4,0};
        for(i = current.size()-1; i>-1; i--){
            if(58!=current[i]){
                cur += (current[i]-48)*digit*hour;
                cor += (correct[i]-48)*digit*hour;
                digit=10;
            }
            else {
                digit=1;
                hour=60;
            }
        }
        cor -= cur;
        i=0;
        while(cor>0){
            if(cor>t[i]){
                cor -= t[i]+1;
                ret++;
            }
            else i++;
        } 
        return ret;
    }
};