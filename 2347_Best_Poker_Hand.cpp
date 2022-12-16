class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_map<char, int> suit;
        unordered_map<int, int> rank;
        int s=0, r=0;
        for(int i=0; i<5; i++){
            suit[suits[i]]++;
            rank[ranks[i]]++;
        }
        for(auto it1=suit.begin(); it1!=suit.end(); ++it1){
            if(s < it1->second) s=it1->second;
        }

        if(s==5) return "Flush";

        for(auto it2=rank.begin(); it2!=rank.end(); ++it2){
            if(r < it2->second) r=it2->second;
        }
        if (r>2) return "Three of a Kind";
        else if (r>1) return "Pair";
        else return "High Card";
    }
};