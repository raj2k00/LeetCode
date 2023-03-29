//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int search(int A[], int l, int h, int key){
    
    int lo = 0, hi = h+1;
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        
        double num = (A[mid] < A[0]) == (key < A[0])
                   ? A[mid]
                   : key < A[0] ? -INFINITY : INFINITY;
                   
        if (num < key)
            lo = mid + 1;
        else if (num > key)
            hi = mid;
        else
            return mid;
    }
    return -1;

    
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends