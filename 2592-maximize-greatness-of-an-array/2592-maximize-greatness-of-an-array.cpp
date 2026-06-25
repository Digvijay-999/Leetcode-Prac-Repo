class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0, j = 0, count = 0;
        int n = nums.size();

        while (j < n) {
            if (nums[i] < nums[j]) {
                count++;
                i++;
            }
            j++;
        }
        return count;
    }
};