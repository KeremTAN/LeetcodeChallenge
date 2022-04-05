class Solution {
public:
    int romanToInt(string s) {
        int ret=0;
        unordered_map<char, int> romans;
        romans['I'] = 1;
        romans['V'] = 5;
        romans['X'] = 10;
        romans['L'] = 50;
        romans['C'] = 100;
        romans['D'] = 500;
        romans['M'] = 1000;
        
        for(int i=0; i<s.size(); i++){
            if(romans[s[i+1]] > romans[s[i]]){
                ret+= romans[s[i+1]] - romans[s[i]];
                i++;
            }      
            else{
                ret+=romans[s[i]];
            }
        }
        return ret;
    }
};