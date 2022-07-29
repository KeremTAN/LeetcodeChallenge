class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int ret=0, x;
        bool isOk=true;
        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[0].size(); j++){
                if(mat[i][j]==1){
                    isOk=true;
                    x=j+1;
                    while(x<mat[0].size())
                        if(mat[i][x++]==1){
                            isOk=false;
                            break;
                        }
                        
                    if(!isOk) break;
                        
                    x=j-1;
                    while(x>-1)
                        if(mat[i][x--]==1){
                            isOk=false;
                            break;
                        }
                        
                    if(!isOk) break;
                        
                    x=i+1;
                    while(x<mat.size())
                        if(mat[x++][j]==1){
                            isOk=false;
                            break;
                        }
                        
                    if(!isOk) break;
                        
                    x=i-1;
                    while(x>-1)
                        if(mat[x--][j]==1){
                            isOk=false;
                            break;
                        }
                        
                    if(!isOk) break;
                        
                    ret++;
                }
                if(ret==mat.size()) break;
                
            } 
        } 
        return ret;
    }
};