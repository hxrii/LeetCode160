Optimal

1. Sort the array
2. Place an outer loop 
    if i == i-1 and i!=0
        continue
    use first and last
        first = i+1
        last = n-1
    while first < last
        check if first + last + i == target
            if so push them
            first++
            last--
            while first ! = first-1
                first++               
            while last ! = last+1
                last--
        if greater
            last --
        if lesser
            first ++             