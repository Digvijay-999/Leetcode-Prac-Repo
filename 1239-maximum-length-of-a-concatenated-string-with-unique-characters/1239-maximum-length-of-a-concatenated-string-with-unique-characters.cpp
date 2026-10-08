class Solution {
public:
    int ans = 0;

    void backtracking(vector<string>& arr, int index, int mask, int len) {
        ans = max(ans, len);

        for(int i = index; i < arr.size(); i++) {
            int newMask = 0;
            bool valid = true;
        
            for (char c : arr[i]) {
                if (newMask & (1 << (c - 'a'))) { valid = false; break; }
                newMask |= (1 << (c - 'a'));
            }
        
            if (!valid || (mask & newMask)) continue;
        
            backtracking(arr, i + 1, mask | newMask, len + arr[i].size());
        }
    }
    int maxLength(vector<string>& arr) {
        ans = 0;
        backtracking(arr, 0, 0, 0);
        return ans;
    }
};