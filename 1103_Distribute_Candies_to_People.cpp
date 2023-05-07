class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ret(num_people);
        int can{1}, i{0}, cum{0};
        while(candies>can){
            if(i!=num_people){
                ret[i++]+=can; 
                candies-=can;
                can++;
            }
            else i=0;
        }
        if(i==num_people) 
            i=0;
        if(candies)
            ret[i]+=candies-cum;
        return ret;
    }
};