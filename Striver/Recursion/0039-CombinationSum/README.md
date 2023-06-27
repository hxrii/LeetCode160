Intuition

Combination involves finding subsets, hence recusion can be used.
Picking an element or not should be the choice in recursion.
Approach

In the recursion function;

    if index exceeds size of candidates
        return
    We check if temporary array sum is Equal to target,
        if so push the array into ans and return
    if temporary array sum is Greater than target,
        return since target is exceeded

In recusion part,
we either keep selecting the current element
or
move to next element without selecting current element

Hence suppose the array is [2,3,5,6] and target is 5
then
The recursion tree looks like
https://leetcode.com/problems/combination-sum/solutions/3689319/best-recursive-c-solution-with-steps-and-diagrams/