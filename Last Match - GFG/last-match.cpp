//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    vector <int> failure_function (string pattern){
        int m = pattern.size();
        vector <int> lps(m);
        
        int j = 0;
        
        for(int i = 1; i < m; i++ ){
            while( j > 0 && pattern[i] != pattern[j]){
                j = lps[j - 1];
            }
            
            if( pattern[i] == pattern[j]){
                j++;
            }
            
            lps[i] = j;
        }
        
        return lps;
        
    }

    int findLastOccurence(string A,string B){
        
        vector <int> lps_array =  failure_function(B);
        
        int n = A.size();
        int m = B.size();
        int ans = -1;
        
        int j = 0;
        
        for(int i = 0 ; i < n; i++){
            
            while( j > 0 && A[i] != B[j]){
                j = lps_array[j - 1];
            }
            
            if( A[i] == B[j]){
                j++;
            }
            
            if( m == j ){
                ans = i - m + 2;
            }
            
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A>>B;
        Solution ob;
        cout<<ob.findLastOccurence(A,B)<<"\n";
        
    } 
    return 0; 
}
// } Driver Code Ends