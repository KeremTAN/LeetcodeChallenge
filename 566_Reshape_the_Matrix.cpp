class Solution {
    public int[][] matrixReshape(int[][] mat, int r, int c) {
        int m = mat.length, n=mat[0].length;
        int[][] ret = new int[r][c];
        int size=m*n;
        if(size!=r*c)
            return mat;
        for(int i=0; i<size; i++){
            ret[i/c][i%c]=mat[i/n][i%n];
        }
        return ret;
    }
}