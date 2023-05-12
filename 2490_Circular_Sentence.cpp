class Solution {
public:
    bool isCircularSentence(string sentence) {
        size_t size=sentence.size()-1;
        for(int i{}; i<size; i++){
            while(i<size && sentence[i]!=' ') i++;
                if(sentence[i+1]!=NULL && sentence[i-1]!=sentence[i+1])
                    return 0;
        }
        return sentence[0]!=sentence[size] ? 0 : 1;
    }
};