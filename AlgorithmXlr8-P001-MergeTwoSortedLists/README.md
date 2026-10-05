<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Merge Two Sorted Lists

**Difficulty:** `Easy`

## Problem

Given the heads of two sorted linked lists, merge them into one sorted list by splicing together the nodes of the two original lists, and return the head of the merged list.

Read n1 (count) and the n1 values of the first list, then n2 (count) and the n2 values of the second list, each count and value-line on its own line of standard input (an empty list still has an empty second line). Print the merged list, space-separated, or "(empty)" if the result is empty.

## Examples

### Example 1

**Input**
```
3
1 2 4
3
1 3 4
```
**Output**
```
1 1 2 3 4 4
```

**Explanation:** Splicing the smaller current node at each step gives [1,1,2,3,4,4].

### Example 2

**Input**
```
0

1
0
```
**Output**
```
0
```

**Explanation:** One list is empty, so the result is simply the other list.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/merge-two-sorted-lists).