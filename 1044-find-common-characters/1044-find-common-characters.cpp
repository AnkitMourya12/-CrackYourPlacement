class Solution {
public:
    vector<string> commonChars(vector<string>& words) { 
        int n=words.size();
//         string st=words[0];
//         vector<string>ans;
// string cur="";
//         int n1=st.size();
//         for(auto x:words){
//             string temp=x;
            
//             unordered_map<char,int>mp;
//             int s=temp.size();
//             for(int i=0;i<s;i++){
//                 if(mp.find(n)!=mp.end()){
//                     ans.push_back(nums[i]);
//                 }
//                 else
//                 mp[words[i]]++;
//             }
        unordered_map<char,int>mp;
        for(int i=0;i<words[0].size();i++){
            mp[words[0][i]]++;
        }

        //string st;
        vector<string>ans;

        for(auto x:words){
          unordered_map<char,int>temp;

          int n1=x.size();
          for(int i=0;i<n1;i++){
            if(temp.find(x[i])!=temp.end()){
                temp[x[i]]++;
            }
            else
            temp[x[i]]=1;
          }

          for(auto c:mp){
            //int n2=c.size();
            char cc=c.first;
            if(temp.find(cc)!=temp.end()){
                 mp[cc]=min(mp[cc],temp[cc]);
            }
            else
            mp[cc]=0;
          }
        }
        for(auto x:mp){
            int n3=x.second;
            
             for(int i=0;i<n3;i++){
                // if(n3!=0){
                    string ch="";
                    ch+=x.first;
                // char d=x.first;
                ans.push_back(ch);
            //  }
        }

        }
        return ans;
        
    }
};