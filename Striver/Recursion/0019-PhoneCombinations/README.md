Intuition

Since we need combinations, recursion is the way to go.
Approach

Use mapping to store each letters for digit in an array of strings
in recursive function,

    if index == length of digits,
        Push the final string to ans
        return
    for every combination of letter in that digit, call the function recursively

Complexity

    Time complexity: O(4^k) since each loop can go max 4 times and call recursion and k = length of the digits

    Space complexity: O(4^k)
