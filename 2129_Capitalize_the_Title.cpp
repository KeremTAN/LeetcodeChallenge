class Solution {
public:
    string capitalizeTitle(string title) {
        bool isBfrSpace = 1;
        char i=0, cnt=0, c=1, size=(1+title.size());
        for(; i<size; i++){
            if(title[i]==32 || i==(size-1)){
                isBfrSpace=1;
                c=1;
                if(cnt<3){
                    while(i-c>-1 && title[i-c]!=32){
                        if(title[i-c] < 91)
                            title[i-c] += 32;
                        c++;
                    }
                }
                cnt=0;
            }
            else if(!isBfrSpace){ 
                if(title[i] < 91)
                    title[i]+=32;
                cnt++;
            }
            else{
                if(title[i] > 90)
                    title[i] -= 32;
                isBfrSpace = 0;
                cnt++;
            }
        }
        return title;
    }
};