class Solution {
public:
    bool isPathCrossing(string path) {

        map<pair<int, int>, int> hash;
        pair<int , int> curr = {0,0};
        hash[curr] = 1; // starting point

        for(int i = 0; i < path.size(); i++){

            switch(path[i]){
                case 'N':
                    curr.second += 1;
                    if(hash[curr] == 1) return true;
                    hash[curr] = 1;
                    break;

                case 'S':
                    curr.second -= 1;
                    if(hash[curr] == 1) return true;
                    hash[curr] = 1;
                    break;

                case 'E':
                    curr.first += 1;
                    if(hash[curr] == 1) return true;
                    hash[curr] = 1;
                    break;

                case 'W':
                    curr.first -= 1;
                    if(hash[curr] == 1) return true;
                    hash[curr] = 1;
                    break;
            }
        }
        return false;    
    }
};