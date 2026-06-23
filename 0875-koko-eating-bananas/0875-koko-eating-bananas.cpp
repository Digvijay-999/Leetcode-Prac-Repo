class Solution {
public:
    bool canFinish(vector<int>& piles, int h, int k) {
        long long ho = 0;
        for (int p : piles) {
            ho += (p + k - 1) / k;
        }
        return h >= ho;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int lo = 1;
        int hi = *max_element(piles.begin(), piles.end());
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (canFinish(piles, h, mid)) {
                hi = mid;
            } else {
                lo = mid + 1;
            }
        }
        return lo;
    }
};