class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {


        // check for maximum T with K changes

        int Tleft = 0;
        int Fleft = 0;
        int maxTCount = 0;
        int maxFCount = 0;
        int maxT = INT_MIN;
        int maxF = INT_MIN;


        for(int right = 0; right < answerKey.size(); right++){

            if(answerKey[right] == 'F'){
                maxFCount++;
            }

            if(answerKey[right] == 'T'){
                maxTCount++;
            }

            while(maxFCount > k){
                if(answerKey[Fleft] == 'F'){
                    maxFCount--;
                }
                Fleft++;
            }

            while(maxTCount > k){
                if(answerKey[Tleft] == 'T'){
                    maxTCount--;
                }
                Tleft++;
            }

            maxF = max(maxF, right - Fleft + 1);
            maxT = max(maxT, right - Tleft + 1);

        }

        return max(maxT, maxF);
        
    }
};