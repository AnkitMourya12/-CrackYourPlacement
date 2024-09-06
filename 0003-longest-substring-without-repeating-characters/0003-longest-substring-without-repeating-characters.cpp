class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int l=0;
        int r=0;
        int len=1;
        int maxi=0;
       // mp[s[r]]=l;
    
        if(s.size()==0){
            return 0;
        }

        
        while(r<s.size()){
           
            if(mp.find(s[r])!=mp.end() && mp[s[r]]>=l){
               maxi=r-l;
                len=max(maxi,len);
                l=mp[s[r]]+1;
                mp[s[r]]=r;
                  r++;  
            }
            else{
                 mp[s[r]]=r;
                   r++;
                 
        }       

        }
        maxi=r-l;
        if(maxi<len){
            return len;
        }
        
       return maxi;
      // return len;
        
    }
};