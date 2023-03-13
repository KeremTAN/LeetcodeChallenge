class Solution {
public:
    string interpret(string command) {
        string ret;
        for(int i=0; i<command.size()-1; i++){
            if(command[i]=='(')
                if(command[i+1]!=')'){
                    ret+="al";
                    i+=3;
                }
                else {
                    ret+="o";
                    i+=1;
                }
            else ret+=command[i];
        }
        if(command[command.size()-1]!=')')
            ret+="G";
        return ret;
    }
};