// 非递归快速幂
class Solution {
public:
    double Power(double base, int exponent) {
        double res = 1;
        if (exponent < 0) {
            base = 1 / base;
            exponent = - exponent;
        }
        while (exponent) {
            if (exponent & 1)
                res = res * base;
            base = base * base;
            exponent >>= 1;
        }
        return res;
    }
};