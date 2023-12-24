class Solution {
public:
    int minOperations(string s) {
        int oneCount = 0;
        int zeroCount = 0;
        string oneS =  s;
        string zeroS =  s;


        if(oneS[0] == '0') oneCount++;
        
        oneS[0] = '1';
        char prev = '1';

        for(int i = 1; i < s.size(); i++ ){
            if(oneS[i] == prev ){
                oneCount++;

                if(prev == '0') oneS[i] = '1';
                else oneS[i] = '0';
          
            }
                  prev = oneS[i];
        }


        if(zeroS[0] == '1') zeroCount++;
        zeroS[0] = '0';
        prev = '0';

        for(int i = 1; i < s.size(); i++ ){
            if(zeroS[i] == prev ){
                zeroCount++;
                
                if(prev == '0') zeroS[i] = '1';
                else zeroS[i] = '0';
          
            }
                  prev = zeroS[i];
        }

        cout << oneCount << " " << zeroCount; 

        return min(oneCount, zeroCount);
    }
};