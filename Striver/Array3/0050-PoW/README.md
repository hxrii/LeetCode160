use long long for calculation
long long num = n where n is the power

if num is negative, make it positive

in loop where num>0
    if num is divisible by 2
        x = x * x
        num/=2

    else
        ans = ans * x
        num -= 1

    (Here if num is divisible, then double the number will be calculated to half the power)

if n was negative 
    ans = 1/ans

return ans    
