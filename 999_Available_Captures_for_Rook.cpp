class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int ret=0, Ri=0, Rj=0;
        bool isFound=true; 
        for(int i=0; i<8; i++){
            if(isFound){
            for(int j=0; j<8; j++){
                    if(board[i][j]==82){
                        Ri=i;
                        Rj=j;
                        isFound=false;
                        break;
                    }
                }
            }
            else break;
        }
        for(int i=Ri+1; i<8; i++){
            if(board[i][Rj]==66) { break; }
            if(board[i][Rj]==112){ ret++; break; }
        }
        for(int i=Ri-1; i>-1; i--){
            if(board[i][Rj]==66) { break; }
            if(board[i][Rj]==112){ ret++; break; }
        }
        for(int j=Rj+1; j<8; j++){
            if(board[Ri][j]==66) { break; }
            if(board[Ri][j]==112){ ret++; break; }
        }
        for(int j=Rj-1; j>-1; j--){
            if(board[Ri][j]==66) { break; }
            if(board[Ri][j]==112){ ret++; break; }
        }
        return ret;
    }
};