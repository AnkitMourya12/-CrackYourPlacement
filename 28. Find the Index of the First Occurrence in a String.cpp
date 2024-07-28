class Solution {
public:

bool compare(string h,string n,int i){
   
    
    for(int k=0;k<n.size();k++){
        if(i>=h.size()){
            return false;
        }
          if(h[i++]!=n[k]){
            return false;
           }
    }
           return true;
    
}
    int strStr(string h, string n) {
       
       for(int i=0;i<h.size();i++){
        if(h[i]==n[0]){
           if(compare(h,n,i)){
            return i;
           }
        }
    }
    return -1;
    }
};
