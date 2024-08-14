class Solution {
public:
    bool validPalindrome(string s) {
        int n=s.size();
        int i=0,j=n-1,count=0,count1=0;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                if(s[i]==s[j-1]){
                    j--;
                    count++;
                }
                else if(s[i+1]==s[j]){
                    i++;
                    count++;
                }
                else count+=2,i++,j--;
            }
        }
        i=0,j=n-1;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                if(s[i+1]==s[j]){
                    i++;
                    count1++;
                }
                else if(s[i]==s[j-1]){
                    j--;
                    count1++;
                }
                else count1+=2,i++,j--;
            }
        }
        return count<=1 || count1<=1;
    }
};
