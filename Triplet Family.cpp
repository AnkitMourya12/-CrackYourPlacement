class Solution {
  public:
    bool findTriplet(vector<int>& arr) {
        // Your code
         int n=arr.size();
        unordered_set<int>s;
        for(int i=0;i<n;i++){
            s.insert(arr[i]);
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(s.find(arr[i]+arr[j])!=s.end()){
                    return true;
                }
            }
        }
        return false;
    }
};
