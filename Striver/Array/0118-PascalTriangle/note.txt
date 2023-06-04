1. Brute Force

- Calculate nCr using n!, r! and n-r!;

2. Better 
- Use fact that n-r! cuts n! elements and hence calculate only required values

3. Optimised
-Eg: 
5C3 => fifth row, 3rd column element,
- Use Element is 1 be ans
- Second element is 4 => ans * (row - Column)/ Column
- Keep Going and find each element using loop
