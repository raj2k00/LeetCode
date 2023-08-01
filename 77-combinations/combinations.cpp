class Solution {
public:

		vector <vector <int>> ans;


		void helper(int index, int k, vector <int> &currentCombo, int n){


			if(currentCombo.size() == k){
				ans.push_back(currentCombo);
				return;
			}

			for(int i = index; i <= n ; i++){

					currentCombo.push_back(i);

					helper(i+1, k, currentCombo, n);

					currentCombo.pop_back();

			}

		}


    vector<vector<int>> combine(int n, int k) {
			vector <int> currentCombo;

			helper(1, k , currentCombo, n);

			return ans;
    }
};