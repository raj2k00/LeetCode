//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int search(int A[], int l, int h, int key){
    
        if(l > h) return -1;
        
        int mid = (l + h) / 2;
        
        if(A[mid] == key) return mid;
        
        
        // if low to mid is sorted 
        if(A[l] <= A[mid]){
            
            if(key >= A[l] && key <= A[mid]){
                return search(A, l, mid - 1, key);
            }
            
            // if Key is not lies in the first half, then search in second half
            return search(A, mid + 1, h, key );
            
        }
        
        // if low to mid is not sorted then mid to high is sorted
        
        if(key >= A[mid] && key <= A[h]){
            
            // searching in mid to high
            return search(A, mid + 1, h , key );
        }
        
        // else search in low to mid -1
        return search(A, l , mid - 1  , key);
    
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