class Solution {
  public:
    int sameOccurrence(vector<int>& arr, int x, int y) {
        // code here
          map<int,int>mp;
        mp[0]=1;
        int c=0,res=0;
        for(auto it:arr){
            if(it==x)c++;
            if(it==y)c--;
            if(mp[c])res+=mp[c];
            mp[c]+=1;
        }
        return res;
    }
};
