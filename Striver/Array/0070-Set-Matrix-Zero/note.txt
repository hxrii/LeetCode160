1. Brute Force

- Make all required columns and row to -1 and convert them back to zero.
- Hence first conversion doesnt effect second iteration

2. Better Method

- Use a row array and column array and store the min value of each.
- Convert all zeroes according to row and column arrays

3. Optimal Solution

- Store the row and column inside matrix itself
- Use first row and column for storage
- Use a temp variable to hold m[0][0] so that rows and columns dont collide at [0][0]
- First iterate from outside first row and column and transform
- reverse iterate column and then row 
