class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());

        int bought = 0;
        int remaining = money;


        for(auto i : prices){
            if(bought < 2 && remaining > 0 && i <= remaining){
                bought++;
                remaining -= i;
            }else{
                break;
            }
        }

        if(bought != 2) return money; 
        return remaining;
    }
};