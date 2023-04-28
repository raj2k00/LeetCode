class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int n = nums.size(), res=0;
        int posLen = 0, negLen = 0;
        for(int i:nums){
            if(i==0){
                posLen = 0;
                negLen = 0;
            } else{
                if(i<0){
                    swap(posLen, negLen);
                }
                if(i>0 || posLen>0) posLen++;
                if(i<0 || negLen>0) negLen++;
                res = max(res, posLen);
            }
        }
        return res;   
    }
};