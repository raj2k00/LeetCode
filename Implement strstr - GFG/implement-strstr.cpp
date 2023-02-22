//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
    int lengthOfS = s.length();
    int lengthOfX = x.length();

    if(lengthOfX > lengthOfS) return -1;

    int flag = 0;
    
    for(int i = 0; i < lengthOfS; ++i){
        if(s[i] == x[0]){
            flag = 1;
            for(int j = 1; j < lengthOfX; ++j){
                if(s[i + j] != x[j]){
                    flag = 0;
                    break;
                }
            }
        }
        if(flag == 1){
            return i;
        }
        
    }
    return -1;
     
}