//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
   	vector<int>  common_digits(vector<int>nums){

      vector <int>ans;
      for(int i = 0; i < nums.size(); i++){
          while(nums[i] != 0){
             ans.push_back(nums[i] % 10);
             nums[i] /= 10;
          }
      }
      sort(ans.begin(), ans.end());
      nums.clear();
      nums.push_back(ans[0]);

      for( int i = 0; i < ans.size()-1; i++){
            if(ans[i] != ans[i+1] ){
                nums.push_back(ans[i+1]);
            }
      }
   	return nums;
   	    
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < nums.size(); i++)cin >> nums[i];
		Solution ob;
		vector<int> ans = ob.common_digits(nums);
		for(auto i: ans)
			cout << i << " ";
		cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends