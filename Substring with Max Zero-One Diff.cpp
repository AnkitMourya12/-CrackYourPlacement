# Substring with Maximum Zero-One Difference

## Problem Statement

Given a binary string `s` consisting only of characters `'0'` and `'1'`, find the maximum value of:

[
(\text{Number of 0s}) - (\text{Number of 1s})
]

among all possible non-empty substrings of `s`.

If the string contains only `'1'` characters, return `-1`.

---

## Examples

### Example 1

**Input**

```text
s = "11000010001"
```

**Output**

```text
6
```

**Explanation**

Consider the substring from index `2` to index `9`:

```text
"00001000"
```

* Number of `0`s = 7
* Number of `1`s = 1

Difference:

```text
7 - 1 = 6
```

Hence, the maximum possible difference is `6`.

---

### Example 2

**Input**

```text
s = "111111"
```

**Output**

```text
-1
```

**Explanation**

The string contains only `1`s and no `0`s. Therefore, no substring can have a positive value of:

```text
(Number of 0s) - (Number of 1s)
```

So the answer is `-1`.

---

## Constraints

```text
1 ≤ |s| ≤ 10^5
```

where `|s|` denotes the length of the string.

---

## Expected Complexity

* **Time Complexity:** `O(n)`
* **Auxiliary Space:** `O(1)`

---

## Hint

Treat:

* `'0'` as `+1`
* `'1'` as `-1`

Now the problem reduces to finding the **maximum sum subarray**, which can be solved efficiently using **Kadane's Algorithm**.


##############################################################  Solution #########################################

class Solution {
  public:
    int maxSubstring(string &s) {
        // code here
        int n=s.size();
        int one=0;
        int sum=0;
        int ans=0;
        for(auto ch:s){
            if(ch=='1'){
                sum--;
                one++;
            }
            else{
                sum++;
            }
            ans=max(ans,sum);
            sum=max(0,sum);
        }
        if(one==n) return -1;
        
        return ans;
    }
};
