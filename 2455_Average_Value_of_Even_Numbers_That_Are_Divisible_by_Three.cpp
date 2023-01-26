class Solution {
    public int averageValue(int[] nums) {
        int count=0, sum=0;
        for(int n : nums){
            if(n%6==0){
                sum+=n;
                count++;
            }
        }
        return sum!=0 ? sum/count : sum;
    }
}