class Solution {
public:
    int count = 0;

    void backtrack(int pos, int used, int n) {
        if (pos > n) {
            count++;
            return;
        }
        for (int i = 1; i <= n; i++) {
            if ((!(used & 1 << i)) && (pos % i == 0 || i % pos == 0)) {
                backtrack(pos + 1, used | (1 << i), n);
            }
        }
    }
    int countArrangement(int n) {
        backtrack(1, 0, n);
        return count;
    }
};