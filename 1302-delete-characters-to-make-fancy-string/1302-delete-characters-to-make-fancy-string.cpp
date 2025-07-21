class Solution {
public:
    string makeFancyString(string s) {
string ans="";
        for(auto c:s){
            if(ans.size()>=2 && ans.back()==c && ans[ans.size()-2]==c){
                continue;
            }
            ans.push_back(c);

        }
        return ans;
    }
};