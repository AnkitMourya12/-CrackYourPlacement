class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
       int profit=0;
        int mini=INT_MAX;
        for(int i=0;i<prices.size();i++){
           mini=min(mini,prices[i]);
            
            int currProfit=prices[i]-mini;
            profit=max(currProfit,profit);
            
        }
        return profit;
    }
};
