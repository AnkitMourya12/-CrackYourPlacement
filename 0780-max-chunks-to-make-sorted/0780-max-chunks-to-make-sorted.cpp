class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
         int n = arr.size();
        int sum1 = 0;
        int sum2 = 0;
        int ans = 0;

        for(int i=0;i<n;i++){
            sum1 += arr[i];
            sum2 += i;

            if(sum1==sum2)ans++; 
        }
        return ans;

    }
};