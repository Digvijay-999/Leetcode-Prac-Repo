class Solution {
public:
    void generate(int n, int open, int closed, string& temp,
                  vector<string>& ans) {
        if (temp.size() == 2 * n) {
            ans.push_back(temp);
            return;
        }

        if (open < n) {
            temp.push_back('(');
            generate(n, open + 1, closed, temp, ans);
            temp.pop_back();          // Backtrack
        }

        if (closed < open) {
            temp.push_back(')');
            generate(n, open, closed + 1, temp, ans);
            temp.pop_back();          // Backtrack
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        generate(n, 0, 0, temp, ans);
        return ans;
    }
};