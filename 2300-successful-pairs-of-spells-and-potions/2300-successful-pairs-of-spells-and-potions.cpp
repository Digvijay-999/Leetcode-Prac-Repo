class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        int m=potions.size();
        vector<int> ans;
        for(int s:spells){
            long long p= (success+s-1)/s;
            int lo=0, hi=m;
            while(lo<hi){
                int mid=lo+(hi-lo) /2;
                if(potions[mid]<p){
                    lo=mid+1;
                }
                else{
                    hi=mid;
                }
            }
            ans.push_back(m-lo);
        }
        return ans;
    }
};