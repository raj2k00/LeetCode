class Solution {
public:
    vector<int> sumZero(int n) {

        vector<int> ans;

        int s = n / 2;

        for(int i = 1; i <= s; i++){
            ans.push_back(-i);
            ans.push_back(i);
        }

        if(n % 2 != 0){
            ans.push_back(0);
        }

        return ans;
    }
};