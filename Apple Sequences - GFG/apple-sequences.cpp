//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int appleSequences(int n, int m, string arr){
        int left = 0;
        int curr = 0;
        int ans = 0;
        
        for(int right = 0; right < n; right++){
            if(arr[right] == 'O'){
                curr++;
            }
            
            while(curr > m){
                if(arr[left] == 'O'){
                    curr--;
                }
                left++;
            }
            
            ans = max(ans, right - left + 1 );
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
        int N, M;
        cin >> N >> M;
        string arr;
        cin >> arr;
        
        Solution ob;
        cout << ob.appleSequences(N, M, arr) << endl;
    }
    return 0; 
} 
// } Driver Code Ends