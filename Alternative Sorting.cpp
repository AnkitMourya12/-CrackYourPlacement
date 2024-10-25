class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
        // Your code goes here
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            ans.push_back(arr[i]);
        }
        
        sort(ans.begin(),ans.end());
        int i=0;
        vector<int>ans1;
        int j=arr.size()-1;
        while(i<=j){
            
            if(i==j) {
                ans1.push_back(ans[i]);
            }
             else{
            ans1.push_back(ans[j]);
            ans1.push_back(ans[i]);
                
            }
            
            i++;
            j--;
        }
        
        return ans1;
    }
};
