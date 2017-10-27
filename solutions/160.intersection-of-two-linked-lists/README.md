### Problem
Write a program to find the node at which the intersection of two singly linked lists begins.


For example, the following two linked lists:

```
A:          a1 → a2
                   ↘
                     c1 → c2 → c3
                   ↗            
B:     b1 → b2 → b3
begin to intersect at node c1.
```


**Notes:**
- If the two linked lists have no intersection at all, return null.
- The linked lists must retain their original structure after the function returns.
- You may assume there are no cycles anywhere in the entire linked structure.
- Your code should preferably run in O(n) time and use only O(1) memory.




### Analysis
**题意**
- 如果两个链表根本没有相交，返回NULL。
- 在函数返回后链表必须保留原有的数据结构。
- 你可以假设在整个链结构中没有循环。
- 你的代码最后可以在O(n)时间和O(1)空间运行。

**思路**
找链表交点，很类似Linked List Cycle II那题，方法也是类似的双指针相遇法。分两步走：

1. 如何判断两链表是否相交？
两链表相交则他们必然有共同的尾节点。所以遍历两两链表，找到各自的尾节点，如果tailA!=tailB则一定不相交，反之则相交。

2. 如何判断两链表相交的起始节点？
在第1步判断相交时可以顺带计算两链表的长度lenA和lenB。让长的链表的head先走abs(lenA-lenB)步，然后和短链表的head一起走，直到两者相遇，即为要找的节点。

