class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(), [](auto& a, auto& b){
            return a[1]<b[1];
        });
        int ans=1;
        int end=pairs[0][1];
        int n=pairs.size();
        for(int i=1;i<n;i++){
            if(end < pairs[i][0]){
                ans++;
                end=pairs[i][1];
            }
        }
        return ans;
    }
};