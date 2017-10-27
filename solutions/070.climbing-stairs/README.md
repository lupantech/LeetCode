### Problem
You are climbing a stair case. It takes n steps to reach to the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

**Note**: Given n will be a positive integer.



### Analysis


```
f(2) = n1+n2 = f(1)+f(0)
......
f(6) = n1+n2 = f(5)+f(4)
- n1 = f(5)
- n2 = f(4)

f(7) = n1+n2 = f(6)+f(5)
- fn = n1+n2
- n2 = f(5) = n1
- n1 = f(6) = fn
```