code-1
```
1. Use map to store the left and right parethesises
2. Use stack and push if opening parethesis
3. In loop
        check if closing parenthesis
            check if top of stack is its valid open P
                return false if not
            if stack is empty
                return false
            pop the top of stack            

Time Complexity : O(n)
Space Complexity : O(n)
```



