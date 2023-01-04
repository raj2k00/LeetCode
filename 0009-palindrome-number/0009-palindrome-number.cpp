class Solution {
public:
    bool isPalindrome(int x) {
        long int reversedNumber = 0;
        int remainder;
		for (int i = x; i > 0; i=i/10) {
            remainder = i%10;
            reversedNumber=reversedNumber*10+remainder;
		}
		if(x==reversedNumber)  return true;
        return false;
    }
};