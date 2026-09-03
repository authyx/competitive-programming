# competitive-programming

Practice problems from LeetCode, HackerRank, and CodinGame — covering arrays, strings, two-pointer, sliding window, hash maps, sorting, and basic DP.

**Tech stack:** C++ (16 problems), Python (1 problem).

## LeetCode

12 problems solved. Organized by topic:

### Arrays & Hashing
- Two Sum — hash map lookup
- Contains Duplicate — set membership
- Product of Array Except Self — prefix/suffix products, no division
- Maximum Subarray — Kadane's algorithm
- Best Time to Buy and Sell Stock — single pass, min price tracking
- Longest Substring Without Repeating Characters — sliding window + hash set
- Valid Anagram — character frequency counting
- Valid Palindrome — two pointers, alphanumeric filter
- 3Sum — sorting + two pointers, avoid duplicates

### String & Grid
- Container With Most Water — two pointers, area maximization
- Shift 2D Grid — circular shift on a flattened array

### Miscellaneous
- Longest Palindrome (isPalindrome.cpp) — longest palindromic substring (expand-around-center)

## Other platforms

### CodinGame
- Mad Pod Racing — race simulation
- ODC — ?
- Pixel Polygons — geometry/grid problem

### HackerRank
- count_elements_greater_than_previous_average.cpp — array statistics
- t.cpp — small test/scratch

## What I learned

Using competitive programming to build familiarity with common patterns — two pointers, sliding window, prefix sums, hash-map lookups — so they come to mind faster when I hit a real problem. The shift from "I can solve this eventually" to "I recognize this as a sliding window problem" is the real progress. C++ was the main language; one Python problem for variety. The collection is still growing — new problems get added as I work through them.

## Status

In progress — content is added over time. Not every problem has a writeup; most are just the solution code.

## How to run

```bash
g++ -std=c++17 leetcode/Two\ Sum.cpp -o two_sum && ./two_sum
python3 leetcode/Longest\ Substring\ Without\ Repeating\ Characters.py
```

Each file is self-contained with its own `main()` for testing. 