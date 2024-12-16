class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
         int n1=a.size();
        int m1=b.size();
         int i=n1-1,j=0;
        while(i<n1 && j<m1){
             if(a[i]>b[j])
             {
                 swap(a[i],b[j]);
                 
                i--;
                j++;
             }
             else{
                 break;
             }
            
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        vector<int>ans;
        for(int i=0;i<n1;i++){
            ans.push_back(a[i]);
        }
         for(int i=0;i<m1;i++){
            ans.push_back(b[i]);
        }
        return ans[k-1];
       
    }
};
