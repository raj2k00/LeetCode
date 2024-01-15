class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map <int, int> lost;
        unordered_map <int, int> won;
        unordered_set <int> s;

        for(int i = 0; i < matches.size(); i++){
            for(int j = 0; j < 2; j++){

                if(j == 1){
                    lost[matches[i][j]]++;
                }

                else{
                    won[matches[i][j]]++;
                }

                s.insert(matches[i][j]);

            }
        }


        vector<vector<int>> ans;

        // zero loses

        vector <int> noLoss;
        vector <int> oneLoss;

        // for(auto i :s){
        //     cout << i << " " << won[i] <<" "<<lost[i] << endl;
        // }



        for(auto i : s){
            

            if(lost[i] == 0 && won[i] > 0){
                noLoss.push_back(i);
            }

            else if(lost[i] == 1){
                oneLoss.push_back(i);
            }


        }
        sort(noLoss.begin(), noLoss.end());
        sort(oneLoss.begin(), oneLoss.end());

        ans.push_back(noLoss);
        ans.push_back(oneLoss);
        return ans;
    }
};