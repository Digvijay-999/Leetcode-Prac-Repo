class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n= arr.size();
        double lo=0.0 , hi=1.0;
        while(true){
            int num=0, den=1, count=0, j=1;
            double mid= (lo+hi)/2.0;
            for(int i=0;i<n;i++){
                while(j<n && (arr[j]*mid) < arr[i]){
                    j++;
                }
                if(j==n){
                    break;
                }
                count+=(n-j);
                if(arr[i]*den > num*arr[j]){
                    num=arr[i];
                    den=arr[j];
                }
            }
            if(count==k){
                return {num,den};
            }
            else if(count>k){
                hi=mid;
            }
            else{
                lo=mid;
            }
            
        }
    }
};