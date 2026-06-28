class Solution {
public:
    string expand(string& s, int l, int r) {
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            l--;
            r++;
        }
        return s.substr(l + 1, r - l - 1);
    }
    string longestPalindrome(string s) {
        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            string e = expand(s, i, i);
            string o = expand(s, i, i + 1);
            if (e.size() > ans.size()) {
                ans = e;
            }
            if (o.size() > ans.size()) {
                ans = o;
            }
        }
        return ans;
    }
};