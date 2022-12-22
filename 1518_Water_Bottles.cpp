class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int drink=numBottles, emptyBottles=numBottles, t=0;
        while(emptyBottles>=numExchange){
            drink+=emptyBottles/numExchange;
            t=emptyBottles%numExchange;
            emptyBottles/=numExchange;
            emptyBottles+=t;
        }
        return drink;
    }
};