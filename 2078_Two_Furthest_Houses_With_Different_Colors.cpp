class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i=0, j=colors.size()-1, ti, tj;
        while(i<j){
            if(colors[i]!=colors[j]){
                break;
            }
            else{
                ti=i;
                tj=j;
                while(colors[++ti]==colors[i]);
                while(colors[--tj]==colors[i]);
                if((ti-i) < (j-tj)){
                    i=ti;
                }
                else{
                    j=tj;
                }
            }
        }
        return j-i;
    }
};