//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:

    bool isHappy(int n){
        if( n == 1 || n == 7) return true;
        
        if(n == 2 || n == 3 || n == 4 || n == 5 || n == 6 || n == 8 || n == 9){
            return false;
        }
        
        int sum = 0;
        
        while(n){;
            sum +=  (n % 10) * (n % 10);
            n /= 10;
        }
        
        return isHappy(sum);
    }

    int nextHappy(int N){
        
        while(true){
            N++;
            if(isHappy(N)) return N;
        }
        
        return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends