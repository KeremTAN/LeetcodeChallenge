class Solution {
public:
    string largestGoodInteger(string num) {
        string ret="";
        ret.reserve(3);
        char bfr=num[0];
        int count=0;
        for(int i=1; i<num.size(); i++){
            if(bfr!=num[i])
                count=0;
            else count++;
            if(count==2){
                if(ret[0]<num[i]){
                    ret.clear();
                    for(int j=0; j<3; j++)
                        ret+=num[i];
                }
                count=0;
            }
            bfr=num[i];
        }
        return ret;
    }
};