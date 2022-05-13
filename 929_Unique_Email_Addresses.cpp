class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> mails;
        string local, domain, tmp;
        bool isDomain = false, isAddable=true;
        for(string& email : emails){
            local="";
            domain="";
            isAddable=true;
            isDomain = false;
            for(char& c : email){
                if(c==64){
                    isDomain=true;
                }
                if(isDomain){
                    domain+=c;
                }
                else{
                    if(c==43){
                        isAddable=false;
                    }
                    if(c!=46 && isAddable){
                        local+=c;
                    }
                }
            }
            mails.insert(local+domain);
        }
        return mails.size();
    }
};