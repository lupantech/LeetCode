### Problem

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
``` 
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
```


### Analysis
**方法一：从左到右遍历，两两求和**


**方法二：两端到中间遍历，求和**
```
a[0]+a[3] = 2+15 > 9
a[0]+a[2] = 2+11 > 9
a[0]+a[1] = 2+11 = 9
```

注意两点：
1. 拷贝一个数组，用于查找某元素在原始数组中的下标
2. 在数组中查找某元素，找到以后要加该元素赋值为特殊值，避免再次被找到。如下例：
```
Input:
[3,3]
6
Wrong Output:
[0,0]
Expected:
[0,1]
```
