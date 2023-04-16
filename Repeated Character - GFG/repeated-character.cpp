//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    char firstRep (string s)
    {
        bool charArr[256] = {false};
        char res = '#';
        
        
        for(int  i = s.size() - 1; i >= 0; i-- ){
            if(charArr[s[i]] == false){
                charArr[s[i]] = true;
            }
            else {
                res = s[i];
            }
        }
        
        return res;
    }
    
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        char res = ob.firstRep (s);
        if (res == '#') cout << -1 << endl;
        else cout << res << endl;
    }
    return 0;
}



// } Driver Code Ends