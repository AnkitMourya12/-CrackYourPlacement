class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        
        unordered_set<int>st;
        vector<int>ans;
        
        for(int i:arr){
            if(st.find(i)==st.end()){
            ans.push_back(i);
            }
            st.insert(i);
        }
        
            
       
        return ans;
        
    }
};
