// 暴力求二进制法
// 移位法
// 技巧法 n & n-1
class Solution {
public:
     int  NumberOf1(int n) {
         int count = 0;
         while (n != 0) {
             ++ count;
             n = n & n-1;
         }
         return count;
         
     }
};