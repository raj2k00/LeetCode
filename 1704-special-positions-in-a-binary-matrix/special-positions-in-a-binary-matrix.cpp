class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {

        int r = mat.size();
        int c = mat[0].size();
        int ans = 0;

        vector <int> hasRowOne(r,0);
        vector <int> hasColOne(c,0);

        for(int i = 0; i < r ; i++){
            for(int j = 0; j < c ; j++){
                hasRowOne[i] += mat[i][j];
                hasColOne[j] += mat[i][j];
            }
        }

        for(int i = 0; i < r ; i++){
            for(int j = 0; j < c ; j++){
                if(mat[i][j] == 1 ){
                    if(mat[i][j] == hasRowOne[i] && mat[i][j] == hasColOne[j]){
                        ans++;
                    }
                }
            }
        }

        return ans;
    }
};