class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) { // - number
            return false;
        }

        long number_reverse = 0;
        int save_the_original_x = x;

        // reversing the x
        while (x > 0 || x != 0) {
            number_reverse = (number_reverse * 10) + (x % 10);
            x /= 10;
        }

        // even case compare
        return number_reverse == save_the_original_x; // True return.

        
    }
};