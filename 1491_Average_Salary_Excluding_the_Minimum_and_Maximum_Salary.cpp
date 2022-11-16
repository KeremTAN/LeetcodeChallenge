class Solution {
    public double average(int[] salaries) {
        int size = salaries.length-2;
        int max=-1, min=1000000;
        double sum=0;
        for(int salary : salaries){
            sum+=salary;
            if(salary>max) max=salary;
            if(salary<min) min=salary;
        }
        sum -= (min+max);
        return sum/size;
    }
}