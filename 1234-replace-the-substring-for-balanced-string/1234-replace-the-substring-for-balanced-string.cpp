
class Solution {
public:
    int balancedString(string s) {
        int n = s.size();
        unordered_map<char,int> mpp;

        for(auto c : s){
            mpp[c]++;
        }

        int k = n / 4;

        if(mpp['Q'] == k && mpp['W'] == k &&
           mpp['E'] == k && mpp['R'] == k){
            return 0;
        }
        int i = 0;
        int res = n;

        for(int j = 0; j < n; j++){
            mpp[s[j]]--;

            while(i <= j && mpp['Q'] <= k &&
                  mpp['W'] <= k &&
                  mpp['E'] <= k &&
                  mpp['R'] <= k){

                res = min(res, j - i + 1);

                mpp[s[i]]++;
                i++;
            }
        }
        return res;
    }
};