class Solution {
    public int maxProfit(int[] p) {
        int min=100000, max=-1, ret=0, tmp=0, size=p.length;
        for(int i=0; i<size; i++){
            if(p[i]<min){
                min=p[i];
                max=-1;
            }
            if(max<p[i]){
                max=p[i];
                tmp=max-min;
                while(i<size-1 && p[i+1]>p[i])
                    i++;
                if(p[i]-min> tmp)
                    tmp=p[i]-min;
                
                ret+=tmp;
                tmp=0;
                min=100000;
            }
        }
        if(tmp!=0) ret+=tmp;
        return ret;
    }
}