class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int maxCount = 0;

        if(s.size() == 0) return depth;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                depth++;
            }

            if(s[i] == ')'){
                depth--;
            }

            maxCount = max(maxCount, depth);
        }

        return maxCount; 
    }
};