# 📘 1D Array Problems

Practice problems for mastering **1D Arrays** in C++.

---

## 🧩 Problems Overview

| # | Problem | Difficulty | Core Idea |
|---|---------|------------|------------|
| 1 | [Find Most Frequent Number](./Problems.md#1-find-most-frequent-number) | Medium | Frequency counting |
| 2 | Smallest Pair | Easy | Minimum pair evaluation |
| 3 | Palindrome Array | Easy | Two pointers |
| 4 | Find Minimum 3 Values | Medium | Tracking minimum values |

---

# 🔹 [1. Find Most Frequent Number](./find_most_frequent.cpp)

## 🎯 Goal

Given an array of integers, find the number that appears the most.

If multiple numbers have the same frequency, choose the **largest number**.

---

## 📌 Constraints

```text
1 <= N <= 200
-500 <= value <= 270
```

---

## ⚠️ Notes

- Do NOT use nested loops.
- Use frequency counting.
- Negative values are allowed.

---

## 💡 Example

### Input

```text
7
-1 2 -1 3 -1 5 5
```

### Output

```text
-1 repeated 3 times
```

---

## 🧠 Explanation

Frequency count:

```text
-1 → 3 times
 2 → 1 time
 3 → 1 time
 5 → 2 times
```

The highest frequency is `3`, so the answer is:

```text
-1
```

---

# 🔹 2. Smallest Pair

## 🎯 Goal

Find the minimum value of:

```text
A[i] + A[j] + j - i
```

Where:

```text
i < j
```

---

## 💡 Example

### Input

```text
4
2 0 1 9
```

### Output

```text
2
```

---

## 🧠 Explanation

Best pair:

```text
0 + 1 + (2 - 1)
= 2
```

---

# 🔹 3. Palindrome Array

## 🎯 Goal

Determine whether the array reads the same forward and backward.

---

## 💡 Example 1

### Input

```text
5
1 2 3 2 1
```

### Output

```text
YES
```

---

## 💡 Example 2

### Input

```text
4
1 2 3 4
```

### Output

```text
NO
```

---

## 🧠 Explanation

The array:

```text
1 2 3 2 1
```

is identical when reversed.

---

# 🔹 4. Find Minimum 3 Values

## 🎯 Goal

Find the smallest three numbers in ascending order.

---

## ⚠️ Requirements

- Do NOT sort the entire array.
- Do NOT modify the original array.
- Traverse the array only once.

---

## 💡 Example

### Input

```text
6
9 2 7 1 5 3
```

### Output

```text
1 2 3
```

---

## 🧠 Explanation

The smallest three values are:

```text
1 2 3
```

even though the original array is not sorted.

---

# 🚀 Topics Covered

- Frequency Arrays
- Array Traversal
- Two Pointers
- Minimum Tracking
- Basic Optimization
