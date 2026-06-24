class Solution {
public:

    void backtrack(vector<int>& nums, int k, unordered_map<int,int>& freq,int& count, int idx){
        int n=nums.size();
        if(idx==n){
            return;
        }
        for(int i=idx; i<n;i++){
            if(freq[nums[i]-k]==0 && freq[nums[i]+k]==0){
                freq[nums[i]]++;
                count++;
                backtrack(nums,k,freq,count,i+1);
                freq[nums[i]]--;
            }
        }
    }

    int beautifulSubsets(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        int count=0;
        backtrack(nums,k,freq,count,0);
        return count;
    }
};