class Solution \{\
public:\
    vector<string> stringMatching(vector<string>& words) \{\
        vector<string> ret;\
        int f, l, size=words.size(), c;\
        for(int i=0; i<size; i++)\{\
            f = i-1;\
            l = i+1;\
            c=0;\
            while(c++ < size)\{\
                if(f > -1 && words[f--].find(words[i])!=-1)\{\
                    ret.push_back(words[i]);\
                    break;\
                \}\
                if(l < size && words[l++].find(words[i])!=-1)\{\
                    ret.push_back(words[i]);\
                    break;\
                \}\
            \}\
        \}\
        return ret;\
        \
    \}\
\};
