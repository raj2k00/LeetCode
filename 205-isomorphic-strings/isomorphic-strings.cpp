#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    bool isIsomorphic(string& s, string& t) {      
        int n = s.size();
        // Using size 128  for ASCII characters
        char st[128], ts[128];
        memset(st, 127, sizeof(st));
        memset(ts, 127, sizeof(ts));

        for(int i = 0; i < n; i++) {
            char cs = s[i], ct = t[i];
            if(st[cs]==127 && ts[ct]==127) {
                st[cs]=ct;
                ts[ct]=cs;
            }
            else {
                if(st[cs]!=ct || ts[ct]!=cs){
            //        cout<<"["<<i<<"] wrong mapping with cs="<<cs<<", ct="<<ct<<endl;
                    return 0;
                }
            }
        }
        return 1;
    }
};