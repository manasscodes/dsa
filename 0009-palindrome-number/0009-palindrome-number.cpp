class Solution {
public:
    bool isPalindrome(int x) {

        // Negative numbers are never palindromes.
        if (x < 0)
            return false;

        
        int original = x; // Save the original number because 'x' will change.

        
        int reverse = 0; // Variable to store the reversed number.

        
        while (x != 0) { // Continue until all digits are processed.

            // Get the last digit.
            int lastDigit = x % 10;

            // Check for overflow before updating reverse.
            if (reverse > INT_MAX / 10 ||
                (reverse == INT_MAX / 10 && lastDigit > 7))
                return false;

            // Build the reversed number.
            reverse = reverse * 10 + lastDigit;

            // Remove the last digit from x.
            x = x / 10;
        }

        // If original and reversed numbers are equal,
        // then the number is a palindrome.
        return original == reverse;
    }
};