class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        int n=arr.size();
        if(n==1) return arr;
        int E1=arr[0], E2=arr[1],c1=0,c2=0;
        vector<int> ans;
        
        for(int i=2;i<n;i++){
            if(E1==arr[i]){
                c1++;
            }
            else if(arr[i]==E2){
                c2++;
            }
            else if(c1==0){
                E1=arr[i];
                c1++;
            }
            else if(c2==0){
                E2=arr[i];
                c2++;
                
            }
            else {
                c1--;
                c2--;
            }
        }
        c1=0;
        c2=0;
        for(int i=0;i<n;i++){
            if(E1==arr[i]) c1++;
            if(E2==arr[i]) c2++;
        }
        if((c1>n/3)) ans.push_back(E1);
        if((c2>n/3)) ans.push_back(E2);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};
