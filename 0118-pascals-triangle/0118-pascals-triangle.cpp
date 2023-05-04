class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector <vector <int>> res; 

        for(int i = 1; i <= numRows; ++i ){

             vector <int> temp; 
            
            if(i == 1){
                temp.push_back(1);
                res.push_back(temp);
                temp.clear();
            }
            
            else if (i == 2){
                temp.push_back(1);
                temp.push_back(1);
                res.push_back(temp);
            }
            
            else{
                
                vector <int> temp(i,0);
                
                temp[0] = 1;
                temp[i - 1] = 1;
                
                vector <int> prev = res.back();
     
                
                for(int j = 0; j < i - 2; j++){   
                    temp[j+1] = prev[j] + prev[j+1];
                    
                }
                
                res.push_back(temp);
                temp.clear();
            }
            
            
        }
        
        return res;
        
    }
};