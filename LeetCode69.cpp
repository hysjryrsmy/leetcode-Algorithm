//第六十九题：x的平方根

//实现 int sqrt(int x) 函数。计算并返回 x 的平方根，其中 x 是非负整数。
//由于返回类型是整数，结果只保留整数的部分，小数部分将被舍去。
//示例 1:
//输入: 4
//输出 : 2


class Solution {
public:
    int mySqrt(int x) {
        long long l = 0, r = x;
        while (l != r) {
            long long mid = (l + r + 1) / 2;
            if (mid * mid <= x) {
                l = mid;
            }
            else {
                r = mid - 1;
            }
        }
        return (int)r;
    }
};
