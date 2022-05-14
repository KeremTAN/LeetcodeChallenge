class Solution {
public:
    int findComplement(int num) {
        int binaryNum[32]; 
        int i = 0, ret=0; 
        while (num > 0) { 
            binaryNum[i] = num % 2 == 0 ? 1 : 0 ; 
            num/=2; 
            i++; 
        } 
        for(int j=0; j<i; j++){
            ret += binaryNum[j]==1 ? pow(2,j) : 0;
        }
        return ret;
    }
};