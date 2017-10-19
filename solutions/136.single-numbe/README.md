
Given an array of integers, every element appears twice except for one. Find that single one.

**Note**:

Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?


### Solution
异或， 两个相同的数字进行异或的值是0，那么单独的那个数就剩余下来了

比如： [ 1,1,2 ] = ( (1^1) ^2 ) = 2
