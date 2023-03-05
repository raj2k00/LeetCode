//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int nthFibonacci(long long int n){
    
        long long int firstNumber = 0;
        long long int secondNumber = 1;
        
        // base case
        if( n == 0 || n == 1 ) return secondNumber;
        
        long long int temp = 0;
        
        for(int i = 2; i <= n; i++){
            temp = (firstNumber + secondNumber) % 1000000007;
            firstNumber = secondNumber;
            secondNumber = temp;
         }
         
        return temp;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends