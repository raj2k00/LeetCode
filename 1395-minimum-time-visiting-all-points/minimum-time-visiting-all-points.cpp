class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        
        int ans = 0;

        for(int i = 0; i < points.size() - 1; i++){

            int x2 = points[i + 1][0];
            int y2 = points[i + 1][1];
            int x1 = points[i][0];
            int y1 = points[i][1];

            ans += max( abs(x2- x1), abs(y2 - y1));
        }

        return ans;

    }
};