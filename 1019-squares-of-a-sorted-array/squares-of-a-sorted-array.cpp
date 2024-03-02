class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
     vector <int> squared;

     for(int i : nums){
         squared.push_back(i*i);
     }

    sort(squared.begin(), squared.end());
    
    return squared;
    }
};