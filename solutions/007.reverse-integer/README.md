### Problem
Given an array of integers, every element appears twice except for one. Find that single one.

**Note**:

The input is assumed to be a 32-bit signed integer. Your function should return 0 when the reversed integer overflows.


### Solution
翻转数字问题需要注意的就是溢出问题。

为什么会存在溢出问题呢，我们知道int型的数值范围是 -2147483648～2147483647， 那么如果我们要翻转 1000000009 这个在范围内的数得到 9000000001，而翻转后的数就超过了范围。

可以用long型变量保存计算结果，最后返回的时候判断是否在int范围内。
