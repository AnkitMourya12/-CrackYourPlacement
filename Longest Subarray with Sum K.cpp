class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int sz=0, sum=0;
        unordered_map<int, int> m;
        for(int i=0; i<arr.size(); i++){
            sum+=arr[i];
            if(sum == k) {
                sz = max(sz, i+1);
            }
            if(m.find(sum -k) != m.end()){
                sz = max(sz,i - m[sum -k]);
            }
            if(m.find(sum) == m.end())
                m[sum] =i;
        }
        return sz;
    }
};
