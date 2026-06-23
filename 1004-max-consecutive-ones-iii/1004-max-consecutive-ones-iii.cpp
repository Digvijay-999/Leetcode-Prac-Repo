class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zeros=0, maxx=0, l=0;
        int n=nums.size();
        for(int r=0;r<n;r++){
            if(nums[r]==0){
                zeros++;
            }
            while(zeros>k){
                if(nums[l]==0){
                    zeros--;
                }
                l++;
            }
            maxx=max(maxx,r-l+1);
        }
        return maxx;
    }
};