class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int cnt=0;
        int f=0;

        for(char &ch:s){
            if(ch=='1'){
                cnt++;
            }
            else{
                f=min(f+1,cnt);
            }
        }
        return f;
    }
};