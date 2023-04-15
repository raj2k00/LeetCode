//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        vector <int> ans;
        unordered_map <int, int> m;
        
        int distinct = 0;
        
        // first window
        
        for(int i = 0; i < k; i++){
            
            if(m[A[i]] == 0 ){
              distinct++;    
            }
            
            m[A[i]]++; 
        }
        
        ans.push_back(distinct);
        
        // looping through remaining windows
        for(int i = k; i < n; i++){
            
            if(m[A[i- k]] == 1){  //first element of previous iteration;
                distinct--;
            }
            
            m[A[i - k]]--;    // decreasing the count,
            
            if(m[A[i]] == 0 ){
                distinct++;
            }
            
            m[A[i]]++;
            
            ans.push_back(distinct);
            
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends