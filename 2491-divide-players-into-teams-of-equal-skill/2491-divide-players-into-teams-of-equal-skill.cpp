class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int left = 0;
        int right = skill.size() - 1;
        int tar = skill[left] + skill[right];
        long long chem = 0;
        while (left < right) {
            if (skill[left] + skill[right] != tar) {
                return -1;
            }
            chem += skill[left] * skill[right];
            left++;
            right--;
        }
        return chem;
    }
};