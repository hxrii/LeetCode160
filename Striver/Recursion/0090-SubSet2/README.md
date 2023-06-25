https://leetcode.com/problems/subsets-ii/solutions/3681038/simple-c-recursive-solution-with-best-explanation/

Intuition

Since we have to find each subsets within the set, this has to be done via recursion.
Hence the Approach needs to be recursive
Approach
Approach

Here we can use recursion to get each subset and avoid dupicate.
We are trying to get each sized subset in each level of recursion.
ie,

    first recursion call gives set of size 0
    second recursion calls give sets of size 1 and so on

Hence recursion tree looks like this

Screenshot 2023-06-25 at 5.43.32 PM.png

In recursion function

    We first insert the current temp to ans
    in a loop from idx to n
    1. we take all non duplicate next elements
    2. recursively call for the function
    3. so that next levels starting with each of the elements is called
    4. We pop the element so that same size temp is maintained throughout the loop for same next size

In the main function

    Sort the array
    Call the recursive function

Complexity

    Time complexity: O(2^n * k)
    2^n for generating subset
    k for inserting to temp, with avg length of temp = k

    Space complexity:O(2^n * k)
    n is the depth of the recursion tree.
    k is avg length of recursion tree
