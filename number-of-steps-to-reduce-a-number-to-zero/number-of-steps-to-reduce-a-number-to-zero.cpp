class Solution {
public:
    int numberOfSteps(int num) {

        int count = 0;
        if(num == 0) return count;

        while(num != 0){
            if(num % 2 == 0) { count++; num /= 2;} 
            else {count++; num--;};
        }

        return count;

    }
};