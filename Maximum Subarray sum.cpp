
long long maxSubarraySum(vector<int> &arr) {
        int n=arr.size();
        long long maxi=INT_MIN,curr=0;
        for(int i=0;i<n;i++){
            curr+=arr[i];
            maxi=max(maxi,curr);
            if(curr<0){
            curr=0;
            }
        }
        return maxi;
    }
