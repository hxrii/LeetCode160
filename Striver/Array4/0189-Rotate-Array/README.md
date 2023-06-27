Intuition

We can use an extra Array and store in required order with O(n) and paste back, but that will have extra space complexity of O(n).
Hence to optimise, we need a O(n) solution with O(1) space complexity.

With two rotations, the array becomes in normal order.
Approach

Take
k = k % n
since after rotating n times, the array will be same.

Follow with a three step process:

    Let array = [1,2,3,4,5] , k = 2

    Rotate the array fully

    Now Array is [5,4,3,2,1]

    Rotate array from k to n

    Now Array is [5,4,1,2,3]

    Rotate array from 0 to k

    Finally the Array is [4,5,1,2,3]

Complexity

    Time complexity: O(2n) since we are performing two full rotations (One full anf two partial) => O(n)

    Space complexity: O(1)
