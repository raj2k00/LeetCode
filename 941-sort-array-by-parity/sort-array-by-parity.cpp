class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector <int > oddArray;
        vector <int> evenArray;

        vector <int> ans;

        for(int i : nums){
            if(i % 2 == 0){
                evenArray.push_back(i);
            }else{
                oddArray.push_back(i);
            }
        }

        for(int i : evenArray){
            ans.push_back(i);
        }

        for(int i : oddArray){
            ans.push_back(i);
        }

        return ans;

    }
};