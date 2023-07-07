class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {


        // check for maximum T with K changes

        int left = 0;
        int maxCount = 0;
        int maxT = INT_MIN;
        int maxF = INT_MIN;


        for(int right = 0; right < answerKey.size(); right++){

            if(answerKey[right] == 'F'){
                maxCount++;
            }

            while(maxCount > k){
                if(answerKey[left] == 'F'){
                    maxCount--;
                }
                left++;
            }

            maxT = max(maxT, right - left + 1);

        }

        left = 0;
        maxCount = 0;

        for(int right = 0; right < answerKey.size(); right++){

            if(answerKey[right] == 'T'){
                maxCount++;
            }

            while(maxCount > k){
                if(answerKey[left] == 'T'){
                    maxCount--;
                }
                left++;
            }

            maxF = max(maxF, right - left + 1);

        }

        return max(maxT, maxF);
        
    }
};