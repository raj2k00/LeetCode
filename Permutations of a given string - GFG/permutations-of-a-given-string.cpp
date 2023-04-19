//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    
	    void permutations (unordered_set <string> &res ,string s, int l , int r){
	        
	        if( l == r){
	            res.insert(s);
	        
	            
	        }else{
	            
	            for(int i = l; i <= r; i++){
	            
	                swap(s[l], s[i]);
	                
	                permutations(res, s, l+1 , r);
	            
	                swap(s[l], s[i]);
	                
	            }
	            
	        }
	       
	    }
	
		vector<string>find_permutation(string S)
		{
		   vector <string> ans;
		   unordered_set <string> res;
		   
		   permutations(res, S, 0 , S.length() - 1);
		   
		   for(auto i: res){
		       ans.push_back(i);
		   }
		   
		   sort(ans.begin(), ans.end());
		   
		   return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends