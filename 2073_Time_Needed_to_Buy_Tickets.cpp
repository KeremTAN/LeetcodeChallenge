class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ret=k+1;
        for(int i=0; i<tickets.size(); i++)
            if(tickets[i]<tickets[k]){
                ret+= i<k ? tickets[i]-1: tickets[i];
            }
            else ret +=(tickets[k]-1);    
        return ret;
    }
};