class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       stack<int> stk;
       unordered_map<int,int> nge;
       for(int num:nums2){
        while(!stk.empty() && stk.top()<num){
            nge[stk.top()]=num;
            stk.pop();
        }
        stk.push(num);
       } 
       while(!stk.empty()){
        nge[stk.top()]= -1;
        stk.pop();
       }
       vector<int> ans;
       for(int n:nums1){
        ans.push_back(nge[n]);
       }
       return ans;
    }
};