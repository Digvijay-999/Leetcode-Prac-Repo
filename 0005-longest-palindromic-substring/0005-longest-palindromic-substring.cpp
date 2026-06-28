class Solution {
public:
string expand(string s, int l, int r){
    int n=s.size();
    while(l>=0 && r<n && s[l]==s[r]){
        l--;
        r++;
    }
    return s.substr(l+1,r-l-1);
}
    string longestPalindrome(string s) {
        int n=s.size();
        string ans="";
        for(int i=0;i<n;i++){
            string e= expand(s,i,i);
            string o= expand(s,i,i+1);
            if(ans.size()<e.size()) ans=e;
            if(ans.size()<o.size()) ans =o;
        }
        return ans;
    }
};