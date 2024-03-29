//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int maxProfit(vector<int>&price){
    
   int buy1, profit1, buy2, profit2;
 
    buy1 = buy2 = INT_MAX;

    profit1 = profit2 = 0;
    
    
    for( int i = 0 ; i < price.size() ; i++ ){
        
        buy1 = min(buy1, price[i]);  // buying at minimum price;
        profit1 = max(profit1, price[i] - buy1); // sell at maximum price;
        buy2 = min(buy2, price[i] - profit1); // using money from profit1 to cut the cost;
        profit2 = max(profit2, price[i] - buy2);
        
    }
    
    
    return profit2;
  
    
  
  
}

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        cout<<maxProfit(price)<<endl;
    }

}

// } Driver Code Ends