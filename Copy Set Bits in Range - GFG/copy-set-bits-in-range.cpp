//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
            
        int count = 0;   
        vector<int> hash(32,-1);
        
        while(y){
            if( y & 1){
               hash[count] = 1;   
            }
            count++;
            y = y >> 1;
        }
        
        for(int i = l - 1 ; i < r; i++){
            int bit = 1;
            if(hash[i] != -1){
                bit <<= i;
                x = x | bit;  
            }
 
        }
        
        return x;
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, l, r;
        cin>>x>>y>>l>>r;
        
        Solution ob;
        cout<<ob.setSetBit(x, y, l, r)<<"\n";
    }
    return 0;
}
// } Driver Code Ends