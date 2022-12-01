class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i=0, j=s.size()-1;
        char c;
        if(j==0) return s;
        while(1){
            while(!((s[i]>64 && (s[i]<91)) || (s[i]>96 && (s[i]<123))) && i<j)
                i++;
            while(!((s[j]>64 && (s[j]<91)) || ((s[j])>96 && (s[j]<123))) && i<j)
                j--;
            
            if(i<j){
                c=s[i];
                s[i]=s[j];
                s[j]=c;
                i++;
                j--;
            }
            else break;
        }
        return s;
    }
};