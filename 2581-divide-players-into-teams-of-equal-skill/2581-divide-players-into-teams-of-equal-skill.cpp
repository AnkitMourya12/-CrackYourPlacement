class Solution {
public:
    long long dividePlayers(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int i=0;int j=arr.size()-1;
       int c=arr[i]+arr[j];
       long long ans=0;
        while(i<j){
            long long s=arr[i]+arr[j];
            if(s!=c) return -1;
            ans+=arr[i]*arr[j];
            i++;
            j--;
              
        }
        return ans;
        
    }
};