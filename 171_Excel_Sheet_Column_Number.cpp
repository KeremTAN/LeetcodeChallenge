class Solution {
    public int titleToNumber(String columnTitle) {
        int digit = columnTitle.length(), ret=0, p;
        for(int i=0; i<digit; i++){
            p=digit-i-1;
            ret+= Math.pow(26,p)*(columnTitle.charAt(i)-64);
        }
        return ret;
    }
}