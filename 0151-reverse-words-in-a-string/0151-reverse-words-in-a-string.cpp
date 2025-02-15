#include<sstream>
class Solution {
public:
    string reverseWords(string s) {
        istringstream is(s);
        string st;
        vector<string>str;
        while(is>>st){
            str.push_back(st);
        }
        int n=str.size();
        string s1="";
        for(int i=n-1;i>=0;i--){
            s1+=str[i];
            if(i!=0)
            s1+=" ";
        }
        return s1;
    }
};