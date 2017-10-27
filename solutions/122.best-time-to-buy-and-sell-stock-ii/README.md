### Problem
Say you have an array for which the ith element is the price of a given stock on day i.

Design an algorithm to find the maximum profit. You may complete as many transactions as you like (ie, buy one and sell one share of the stock multiple times). However, you may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).



### Analysis
话说你有一个数组，其中第i个元素表示第i天的股票价格。
设计一个算法以找到最大利润。你可以尽可能多的进行交易（例如，多次买入卖出股票）。
然而，你不能在同一时间来多次交易。（例如，你必须在下一次买入前卖出）。


本题由于是可以操作任意次数，只为获得最大收益，而且对于一个上升子序列，比如：[5, 1, 2, 3, 4]中的1, 2, 3, 4序列来说，对于两种操作方案：
1. 在1买入，4卖出
2. 在1买入，2卖出同时买入，3卖出同时买入，4卖出
这两种操作下，收益是一样的。

所以可以从头到尾扫描prices，如果price[i] – price[i-1]大于零则计入最后的收益中。即**贪心法**


参考：http://www.jianshu.com/p/34bbb0594bd9
