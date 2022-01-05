class Solution {
public:
    int minTimeToType(string word) {
        int ret=0, pointer=97, ascii;
        for(char& c : word){
            ascii = (int)c;
            if (abs(ascii - pointer) < 13){
                ret += abs(ascii - pointer);
            }
            else{
                if(ascii - pointer > 0)
                    ret += (pointer-97) + (123-ascii);
                else
                    ret += (ascii-97) + (123-pointer);
            }
            pointer = ascii;
            ret++;
        }
        return ret;
    }
};