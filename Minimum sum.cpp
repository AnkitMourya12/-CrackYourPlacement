class Solution {
  public:
    string minSum(vector<int> &arr) {
        // code here
        int n=arr.size();
        string n1="";
        string n2="";
        string ans="";
        int d=0;
        int x=0;
        sort(arr.begin(),arr.end());
        for(int i=n-1;i>=0;i-=2){
            int cur=arr[i]+arr[i-1]+x;
            d=cur%10;
            ans+=to_string(d);
            x=cur/10;
            
        }
        if(x>0){
            ans+=to_string(x);
        }
        reverse(ans.begin(),ans.end());
        int i=0;
        while(ans[i]=='0'){
            i++;
        }
        return ans.substr(i);
    }
};
