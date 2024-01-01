class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int childrenIndex = 0;
        int cookieIndex = 0;

        while( cookieIndex < s.size() && childrenIndex < g.size()){
            if(s[cookieIndex] >= g[childrenIndex]){
                childrenIndex++;
            }
            cookieIndex++;
        }

        return childrenIndex;
    }
};