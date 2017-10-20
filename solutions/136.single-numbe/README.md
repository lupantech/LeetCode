### 描述
Given an array of integers, every element appears twice except for one. Find that single one.

**Note**:

Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?


### 解答一：异或法
复杂度：**时间 O(N) 空间 O(N)**

我们可以利用异或的特性。一个数异或0，得到这个数本身，一个数异或本身，得到0。所以我们把所有数异或一遍，出现两次的数就变成0，一次的数就是本身，留下来了。

比如： [ 1,1,2 ] = ( (1^1) ^2 ) = 2

### 解答二：哈希表法
复杂度：**时间 O(N) 空间 O(N)**

遍历一遍数组，用哈希表将每个数字出现的次数记下。然后再遍历一遍数组找出出现次数为1的那个。也可以在第一遍遍历的时候一旦出现三次就在表中删去该数。

### 解答三：排序法
复杂度：**时间 O(N) 空间 O(N)**

先将数组排序，再遍历一遍，找前后都不一样的那个数即可。

``` cpp
int cmp (const void *a , const void *b) {
    return *(int *)a - *(int *)b;  //升序排序
    //return *(int *)b - *(int *)a; //降序排序
}
qsort(nums, numsSize, sizeof(int), cmp);
```
    
