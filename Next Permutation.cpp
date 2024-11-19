class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int n=arr.size();
        int id1=-1, id2=-1;
        if(n==0 || arr.empty()){
            return;
        }
        
        for(int i=n-2;i>=0;i--){
            if(arr[i+1]>arr[i]){
                 id1=i;
                break;
            }
           
        }
        if(id1==-1)
        {reverse(arr.begin(),arr.end());
        return;
        }
        
        for(int i=n-1;i>id1;i--){
            if(arr[id1]<arr[i]){
                 id2=i;
                break;
            }
           
        }
        swap(arr[id1],arr[id2]);
        reverse(arr.begin()+id1+1,arr.end());
        
        
    }
};
