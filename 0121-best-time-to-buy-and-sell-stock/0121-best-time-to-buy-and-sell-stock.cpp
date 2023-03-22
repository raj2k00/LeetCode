class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 1) return 0;
        int maximumProfit = prices[1] - prices[0];
        int minimumSpend = prices[0];
        
        for(int i = 1; i < prices.size(); i++ ){
            if(maximumProfit < prices[i] - minimumSpend){
                maximumProfit = prices[i] - minimumSpend;
            }
            if(minimumSpend > prices[i]){
                minimumSpend = prices[i];
            }
        }
        
        if(maximumProfit <= 0){
            return 0;
        }
        return maximumProfit;
        
    }
};