class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int s1_size=s1.size();
         int s2_size=s2.size();

         sort(begin(s1),end(s1));

         for(int i=0;i<=s2_size-s1_size;i++){
            string substring=s2.substr(i,s1_size);
            sort(begin(substring),end(substring));
            if(s1==substring) return true;
         }
         return false;

    }
};