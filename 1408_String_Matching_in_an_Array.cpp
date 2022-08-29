{\rtf1\ansi\ansicpg1254\cocoartf2639
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 class Solution \{\
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
\};}