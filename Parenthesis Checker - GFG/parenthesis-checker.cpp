//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        int n = x.size();
        
        if( n % 2 != 0) return false;
        
        stack <char> hash;
    
        for(int i = 0; i < n; i++){
            
            if(x[i] == '{'){
                hash.push('}');
            }
            if(x[i] == '('){
                hash.push(')');
            }
            if(x[i] == '['){
                hash.push(']');
            }
            
            if(x[i] == '}'){
                if(hash.empty()) return false;
                if(hash.top() == '}'){
                    hash.pop();
                }else{
                    return false;
                }
            }
            
            if(x[i] == ')'){
                if(hash.empty()) return false;
                if(hash.top() == ')'){
                    hash.pop();
                }else{
                    return false;
                }
            }
            
            if(x[i] == ']'){
                if(hash.empty()) return false;
                if(hash.top() == ']'){
                    hash.pop();
                }else{
                    return false;
                }
            }
        }
         
        return hash.empty() ? true : false;    
        
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends