class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        // return n;
        int sumOdd = 0;
        int sumEven = 0;
       
        for (int i = 1; i <= n; i++) {
            sumOdd += (2 * i - 1); // 1,3,5,7...
            sumEven += (2 * i);    // 2,4,6,8...
        }
        return gcd(sumOdd, sumEven);
    }
};