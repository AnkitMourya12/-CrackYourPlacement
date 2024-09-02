class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1=needle.size();
        int n2=haystack.size() ;
        int i=0,k=0;
        int j=i;      
        if(n1>n2){
            return -1;
        } 
        
        while(k<n2){
            if(haystack[k]==needle[j]){
                k++;j++;
                if(j>=n1){
                   return i;
            }
            }
            
            else {
                j=0;
               
                k=i+1;
                i=k;
            }
           
        }
        return -1;
    }
};
             