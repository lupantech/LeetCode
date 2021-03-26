### Problem
You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security system connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of money you can rob tonight without alerting the police.

### Analysis
这道题的本质相当于在一列数组中取出一个或多个不相邻数，使其和最大。 

这是一道动态规划问题。 
我们维护一个一维数组dp，其中dp[i]表示到i位置时不相邻数能形成的最大和。 

状态转移方程：
```
dp[0] = num[0] （当i=0时）
dp[1] = max(num[0], num[1]) （当i=1时）
dp[i] = max(num[i] + dp[i - 2], dp[i - 1])   （当i !=0 and i != 1时）
```

**注意**
1. 数组长度为0的处理
``` cpp
if (numsSize == 0) return 0; // Important !!!
```

2. max函数定义
``` cpp
#define max(a, b) (a>b?a:b)
```
