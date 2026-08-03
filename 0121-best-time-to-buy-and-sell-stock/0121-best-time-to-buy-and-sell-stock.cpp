class Solution {
    public:
        int maxProfit(vector<int>& prices) {
  int minprofit = prices[0];
  int maxprofit = 0;
  for(int i=0;i<prices.size();i++){
    int cost = prices[i]- minprofit ;
    maxprofit = max(maxprofit, cost);
    minprofit = min(minprofit, prices[i]);
  }
  return maxprofit;
 }
};
