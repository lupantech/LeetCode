### Problem
Given a linked list, determine if it has a cycle in it.

Follow up:
Can you solve it without using extra space?



### Analysis

题目要求是判断链表是否有环，leetcode上链表的题都是没有头结点的，这点大家要记住。而且若链表有环，也是最后一个节点形成的环。

大家考虑这样一个问题，链表的环相当于一个圆形操场。假设有两个人在圆形操场上无限循环的跑，那么速度快的一定能追得上速度慢的。同理，若要判断一个链表是否有环，可设计快慢指针，当快慢指针都进入环的时候，若最终两个指针相遇，必可说明链表存在环。

![enter image description here](http://img.blog.csdn.net/20160517102849235)

**注意**
1. C 语言中结构对象的建立：
``` cpp
struct ListNode *slow = head;
```
2. 访问下一个结点用`->next`
``` cpp
slow = slow->next;
```

3. 下一个结点为非空的判断`NULL`
``` cpp
fast != NULL
```