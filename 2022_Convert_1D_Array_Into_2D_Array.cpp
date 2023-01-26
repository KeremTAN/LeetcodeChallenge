class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ret(m);
        if(m*n != original.size()){
            ret.resize(0);
            return ret;
        }
        for(int i=0; i<m; i++){
            ret[i].resize(n);
            for(int j=0; j<n; j++){
                ret[i][j]=original[j+ n*i];
            }
        }
        return ret;
    }
};