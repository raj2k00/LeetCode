//{ Driver Code Starts
// Program to find best buying and selling days
#include <bits/stdc++.h>

using namespace std;

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int *, int);

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, i;
        cin >> n;
        int price[n];
        for (i = 0; i < n; i++) cin >> price[i];
        // function call
        stockBuySell(price, n);
    }
    return 0;
}

// } Driver Code Ends


// User function template for C++

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int price[], int n) {
    // code here
    int start = 0;
    int flag = 0; // no profit;
    
    
    for(int i = 0; i < n; i++){
        while((i < n - 1) && price[i] < price[i + 1]){
            i++; // goes till price went high before dropping;
        }
        if(i != start && price[i] > price[start] ){
            flag = 1;
            cout<<"("<<start<<" "<<i<<")"<<" ";
        }

        start = i+1;
    }
    
    if(flag == 0){
        cout << "No Profit";
    }
    
    cout << endl;
    
}