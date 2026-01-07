#include <cmath>
class Solution {
public:
    double sqrt_5 = sqrt(5);
    double fib_const = (1 + sqrt_5) / 2;
    int fib(int n) {
        int sign = (n%2==0 ? -1 : 1);
        return (1 / sqrt_5) * (pow(fib_const, n) + sign * pow(fib_const, -n));
    }
};