class Solution {
public:
    string toGoatLatin(string sentence) {      
        sentence+=" ";
        string tmp, ret, a="", tmp2="";
        char init=-1;
        int counter=0;
        for(char& c : sentence){
            if(init==-1)
            {
                init=c;
                a+="a";
                tmp="";
            }
            if(c==' '){
                if(init!=65 && init!=97 && init!=69 && init!=101 && init!=73 && init!=105 && init!=79 && init!=111 && init!=85 && init!=117){
                    tmp2="";
                    for(int i=1; i<tmp.size(); i++)
                        tmp2+=tmp[i];
                    tmp2+=tmp[0];
                    tmp=tmp2;
                }
                ret+=tmp+"ma"+a;
                if(counter!=sentence.size()-1)
                    ret+=" ";
                init=-1; 
            }
            tmp+=c;
            counter++;
        }
        return ret;
    }
};