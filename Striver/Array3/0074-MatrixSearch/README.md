1.

[ ] [ ] [x]
[ ] [ ] [ ]
[ ] [ ] [ ]

Start from the first row, last column
if element is less than the x
    go down
if element is more than the x
    go left

return true when found



2.

Use full matrix as an array

[0] [1] [2]
[3] [4] [5]
[6] [7] [8]

use high = m*n-1
    low = 0

in loop , condition: (high>=low)
    find mid as (low + (high-low)/2)
        (to avoid overflow)

    now find 
    row and column as
    row = mid/m
    column = mid%m

    check if element matches
    if element > target
        high = mid -1
    if element < target
        low = mid + 1        
