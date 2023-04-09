//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2){   
        
        int s1 = array1.size();
        int s2 = array2.size();
        
        
        int i = 0;   // iterators
        int j = 0;  
        
        double m1 = -1; // median 1
        double m2 = -1; // median 2 for odd length
        
        for(int count = 0; count <= (s1 + s2) / 2 ; count++){
            // storing the previous median
            m2 = m1;   
            
            // make sure i or j not reached the end of input array; 
            if( i != s1 && j != s2){ 
                m1 = array1[i] > array2[j] ? array2[j++] : array1[i++];
            }
            
            // i < s1
            else if (i < s1 ){
                m1 = array1[i++];
            }
            
            // j < s2
            else{
                m1 = array2[j++];
            }
            
        }
        
        if((s1 + s2) % 2 == 1){
            return m1;   // return current median
        }
        return (m1 + m2) / 2;   // return current + prev median / 2;
    
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends