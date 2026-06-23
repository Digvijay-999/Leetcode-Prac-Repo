class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> window;
        int count=0;
        int l=0;
        for(int r=0;r<s.size();r++){
            while(window.count(s[r])){
                window.erase(s[l]);
                l++;
            }
            window.insert(s[r]);
            count= max(count, r-l+1);
        }
        return count;
    }
};