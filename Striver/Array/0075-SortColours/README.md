1.
Use seperate int for storing count
Store counts of 1,2,3
Make the array using counts

O(2n) Time Complexity

2.
Optimised

Use Low, Mid and High
iterate on basis of Mid;
if mid element is 0 
    swap with low 
    inc low and mid
if mid element is 1
    inc mid
if mid element is 2
    swap high and mid
    dec mid

O(n) Time Complexity
O(1) Space Complexity    


