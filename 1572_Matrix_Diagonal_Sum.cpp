class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int str=0, fns=mat[0].size()-1;
        int ret=0;
        for(int i=0; i<mat.size(); i++){
            ret+=mat[i][str++]+mat[i][fns--];
        }
        if(mat.size()%2!=0)
            ret-=mat[mat.size()/2][mat[0].size()/2];
        return ret;
    }
};