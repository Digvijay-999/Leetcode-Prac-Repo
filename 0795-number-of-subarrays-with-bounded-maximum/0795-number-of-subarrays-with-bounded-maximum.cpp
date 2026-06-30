class Solution {
public:
int countt(vector<int>& nums, int bound){
    int streak=0,count=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]<=bound){
            streak++;
        }
        else{
            streak=0;
        }
        count += streak;
    }
    return count;
}
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        return countt(nums,right)-countt(nums,left-1);
    }
};