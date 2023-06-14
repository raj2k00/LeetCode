class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {

     int n = grid.size();
     int count = 0;
     map <vector <int> , int> hash;


     for(int i = 0; i < n; i++){
         hash[grid[i]]++;
     }

     for(int i = 0; i < n; i++){
         vector <int> col;

         for(int j = 0; j < n; j++){
             col.emplace_back(grid[j][i]);
         }

         count += hash[col];
     }



    return count;

    }
};