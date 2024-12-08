class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        sort(arr.begin(), arr.end());
        int n=arr.size();
        vector< vector<int>> ans;
       
        vector<int> ele= arr[0];
        for(int i=1;i<n;i++){
            if(arr[i][0]> ele[1]){
                ans.push_back(ele);
                ele= arr[i];
            }
            else{
                ele[1]= max(arr[i][1], ele[1]);
            }
        }
        
        ans.push_back(ele);
        return ans;
    }
};
