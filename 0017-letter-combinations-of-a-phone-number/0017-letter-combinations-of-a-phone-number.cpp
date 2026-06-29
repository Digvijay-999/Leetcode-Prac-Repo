class Solution {
public:

map<char,string> phone{
    {'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}
};
    void backtrack(string digits, vector<string>& ans, string& curr,int i){
        if(i>=digits.size()){
            ans.push_back({curr});
            return;
        }
        for(char c: phone[digits[i]]){
            curr.push_back(c);
            backtrack(digits,ans,curr,i+1);
            curr.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return{};
        string curr;
        vector<string> ans;
        backtrack(digits,ans,curr,0);
        return ans;

    }
};