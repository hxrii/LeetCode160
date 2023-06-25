https://leetcode.com/problems/subsets/solutions/3680655/best-c-solution-with-recusion/

Intuition

Since we have to find each subsets within the set, this has to be done via recursion.
Hence the Approach needs to be recursive
Approach

Let nums = [2,3,4]
When index = 0,
Here we have two options

    Include 2 and move to next index
    Exclude 2 and move to next index

Agian at next index we use this two options

Finally the recursive tree looks like this;


with each step either picking the index element or leaving it

On each recursion we increase the index,
and when index == n
the final temp array is pushed to ans
return
Complexity

    Time complexity: O(2^n), 2^n recursions happens because there are 2^n combinations of subsets for the given n sized array

    Space complexity: O(2^n) since we use 2^n sized 2D array for storing ans
