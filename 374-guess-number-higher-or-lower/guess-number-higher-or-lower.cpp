// The guess API is defined for you.
// int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int low = 1, high = n;

        while (low <= high) {
            // Avoid integer overflow
            int mid = low + (high - low) / 2;
            int res = guess(mid);

            if (res == 0) {
                return mid; // Found the number
            } else if (res < 0) {
                high = mid - 1; // Guess was too high
            } else {
                low = mid + 1; // Guess was too low
            }
        }

        return -1; // Should never be reached if input is valid
    }
};
