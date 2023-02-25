//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
        vector<bool>prime(N+1,true);
        
        for(int p = 2; p * p <= N; p++){
            if(prime[p]){
                for(int i = p * p; i<= N; i= i+ p){
                    prime[i] = false;
                }
            }
        }
        vector<int>primeNumbers;
        
        
        for(int i = 2; i <= N; i++){
            if(prime[i]){
                primeNumbers.push_back(i);
            }
        }
        
        return primeNumbers;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends