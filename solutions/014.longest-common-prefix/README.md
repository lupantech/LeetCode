### Problem
Write a function to find the longest common prefix string amongst an array of strings.



### Analysis
给一个字符串数组，要找到这些字符串的最大前缀公共子串。

- 既然是公共子串，那每个字符串肯定都包含有，并且在头部。
- 首先把第一个字符串作为默认最大，然后依次与后边每一个字符串对比，每次计算当前字符串与默认字符串的最大匹配字符串
- 遍历完所以字符串，此时的默认字符串就是所有字符串的最大前缀公共子串


**注意**：
- 特殊情况处理：没有字符串，则返回空串`""`
``` cpp
if (strsSize == 0) return "";
```
- `str[j] = 0;` 等价于 `str[j] = '\0'`
