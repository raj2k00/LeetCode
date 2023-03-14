//{ Driver Code Starts
// C++ program to rearrange the elements 
// in array such that even positioned are 
// greater than odd positioned elements
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
        vector<int> assign(int a[], int n)
    {
        vector <int> ans(a, a+n);
        for(int i = 1; i < n; i++){
            if(i % 2 == 0){
                if(ans[i] > ans[i - 1]){
                   swap(ans[i-1], ans[i]);
                }
            }else{
                if(ans[i] < ans[i - 1 ]){
                    swap(ans[i-1], ans[i]);
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

//checking if answer is correct or not
bool checkOrder(vector<int> ans){
    for(int i = 1; i < ans.size(); i++){
        if(i%2 != 0){
            if(ans[i] < ans[i-1])
            {
                return false;
            }
        }
        else{
            if(ans[i] > ans[i-1]){
                return false;
            }
        }
    }
    return true;
}
// Driver Code
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int arr[n];
    	for(int i=0; i<n; i++)
    	  cin>>arr[i];
    	Solution ob;
        vector<int> ans;
        ans = ob.assign(arr, n);
        bool check_ans = checkOrder(ans);
        if(check_ans)
            cout << "Correct\n";
        else 
            cout << "Wrong Answer\n";
    }
    return 0;
}
// } Driver Code Ends