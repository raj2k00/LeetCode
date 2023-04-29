class Solution {
public:
    int maxProfit(vector<int>& prices) {

        if(prices.size() == 1) return 0;
        
        int minPrice = prices[0];
        int maxProfit = prices[1] - prices[0];  
        
        for(int i = 1; i < prices.size(); i++){
            
           if(maxProfit < prices[i] - minPrice){
               maxProfit = prices[i] - minPrice;
           } 
            
           if(minPrice > prices[i]){
               minPrice = prices[i];
           }
            
        }
        
        return max(maxProfit,0);
        
        
    }
};