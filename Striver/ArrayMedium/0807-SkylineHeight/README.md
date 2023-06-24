Intuition

As you can see from the grid, the increase of each element is the MINIMUM of (Maximum Column Height and Maximum Row height )

For example;
[ 2 ] [ 4 ] [ 6 ]
[ 7 ] [ 1 ] [ 8 ]
[ 9 ] [ 4 ] [ 5 ]

Here the Max height of row index 0 => 6
Max height of column index 0 => 9

Hence the grid[0][0], ie 2 should be raised to min(6,9)
Approach

Hence we first create two vectors
- One to store Maxheight of each rows
- One to store Maxheight of each columns

Then we store the maxRowheight and maxColheight

Then for each element we are changing to min(maxRowheight,maxcolumnheight) of that row and column.

Hence the difference between that value and existing value is the change, which is added on each iteration to ans
Complexity

    Time complexity: O(2 * n * m) , where n = row and m = column

    Space complexity: O(n+m) , where n = row and m = column

