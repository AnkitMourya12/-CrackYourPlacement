
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int prof=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1]){
                prof+=prices[i]-prices[i-1];
            }
        }
        return prof;
    }
};
