class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int max=releaseTimes[0], tmp=releaseTimes[0], retIx=0;
        for(int i=1; i<releaseTimes.size(); i++) {
            tmp=releaseTimes[i]-releaseTimes[i-1];
            if(max<tmp){
                max=tmp;
                retIx=i;
            }
            else if(max==tmp){
                if(keysPressed[i]>keysPressed[retIx])
                    retIx=i;
            }
        }
        return keysPressed[retIx];
    }
};