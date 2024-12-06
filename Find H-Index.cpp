class Solution {
  public:
    // Function to find hIndex
    int hIndex(vector<int>& citations) {
        // code here
        int n=citations.size();
       vector<int>ans(n+1);
       
       for(int i=0;i<n;i++){
           if(citations[i]>=n) 
           ans[n]++;
           else
           ans[citations[i]]++;
       }
       
       int num=ans[n];
       int cited=n;
       while(num<cited){
           cited--;
           num+=ans[cited];
           
       }
       return cited;
    }
};
