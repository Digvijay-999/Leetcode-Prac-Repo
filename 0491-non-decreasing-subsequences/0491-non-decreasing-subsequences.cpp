class Solution {
public:
    void solve(int idx , int previ , vector<int>& nums ,vector<int>& temp, vector<vector<int>>& ans){
        if(idx==nums.size()){
            if(temp.size()>1)
                ans.push_back(temp);
            return ;
        }

        if(previ==-1 || nums[idx]>=nums[previ]){
            temp.push_back(nums[idx]);
            solve(idx+1, idx,nums,temp , ans);
            temp.pop_back();
        }
        if(previ==-1 || nums[idx]!=nums[previ])
        solve(idx+1 , previ , nums , temp , ans );
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        int n = nums.size() ;
        vector<vector<int>> ans;
        vector<int> temp ;
        solve(0,-1,nums,temp , ans);
        vector<vector<int>> res(ans.begin(),ans.end());
        return res;
    }
};