// Input: N = 97
// Output: 1
// Explanation: 97 is a prime number. Its 
// reverse 79 isalso a prime number. Thus 
// 97 is a  twisted Prime and so, answer is 1.

class Solution {
public:
    int isTwistedPrime(int N) {
        if (!isPrime(N)) {
            return 0;
        }
        
        int reversedN = reverseNumber(N);
        if (isPrime(reversedN)) {
            return 1;
        } else {
            return 0;
        }
    }

private:
    // Helper function to check if a number is prime
    bool isPrime(int num) {
        if (num <= 1) 
        return false;

        if (num <= 3) 
        return true;

        if (num % 2 == 0 || num % 3 == 0) 
        return false;
        
        for (int i = 5; i * i <= num; i += 6) {
            if (num % i == 0 || num % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    }

    // Helper function to reverse a number
    int reverseNumber(int num) {
        int reversed = 0;
        while (num > 0) {
            reversed = reversed * 10 + num % 10;
            num /= 10;
        }
        return reversed;
    }
};
