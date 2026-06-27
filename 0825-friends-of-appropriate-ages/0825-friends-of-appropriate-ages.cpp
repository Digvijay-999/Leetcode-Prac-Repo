class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        unordered_map<int,int> freq;
        for(int i:ages){
            freq[i]++;
        }
        int count=0;
        for(auto& a:freq){
            int ax= a.first;
            int cx=a.second;
            for(auto& b:freq){
                int ay=b.first;
                int cy=b.second;
                if(ay <= ((0.5 * ax) + 7)) continue;
                if(ay>ax) continue;
                count+= cx*cy;
                if(ax==ay) {
                    count-=cx;
                }
            }
        }
        return count;
    }
};