class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX,profit=0,maxProf=0;
        for(int i = 0;i < prices.size();i++){
            minPrice = min(prices[i],minPrice);
            profit = prices[i] - minPrice;
       if(profit < 0){
              profit = 0;
       }
     maxProf = max(profit,maxProf);
}
    return maxProf;
    }
};