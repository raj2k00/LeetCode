class Solution {
public:

    vector <vector <long long>> memo;
    vector <int> coins;

    int count(int i, int amount){

        if(amount == 0){
            return 1;
        }

        if(i == coins.size()){
            return 0;
        }

        if(memo[i][amount] != -1){
            return memo[i][amount];
        }

        if(coins[i] > amount){
            return memo[i][amount] = count(i+1, amount);
        }

        memo[i][amount] = count(i + 1 , amount) + count(i , amount - coins[i]);

        return memo[i][amount];


    }

    int change(int amount, vector<int>& coins) {
        this -> coins = coins;
        memo = vector<vector<long long>> (coins.size(), vector<long long>(amount + 1, -1));
        return count(0, amount);
    }
};