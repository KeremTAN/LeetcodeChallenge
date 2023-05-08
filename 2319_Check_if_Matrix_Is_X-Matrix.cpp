class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        cin.tie(NULL);
        std::ios_base::sync_with_stdio(false);
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid.size(); j++){
                if(i+j==grid.size()-1 || i==j){
                    if(grid[i][j]==0)
                        return 0;
                }
                else if(grid[i][j]!=0)
                        return 0;
            }
        }
        return 1;
    }
};