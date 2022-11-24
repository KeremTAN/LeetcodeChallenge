class Solution {
public:
    int maxNumberOfBalloons(string t) {
        int ban;
        int lo; 
        unordered_map<char, int> umap;
        for(int i=0; i<t.size(); i++){
            if(t[i]=='b' || t[i]=='a' || t[i]=='l' || t[i]=='o' || t[i]=='n')
                umap[t[i]]+=1;
        }
        ban = umap['b'] < umap['a'] ? umap['b'] : umap['a'];
        if(umap['n'] < ban)
            ban = umap['n'];
        lo = (umap['l'] < umap['o'] ? umap['l'] : umap['o'])/2;
        
        return ban < lo ? ban : lo;
    }
};