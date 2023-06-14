Code1

First Sort 
Loop from 0 to n-1 
    initialise start and end variables 
    if ans is not empty and end is less than previous end
    (means interval is already included)
        continue

    else
        for j from i+1 to n
            if jth interval's beginning is less than 'end'
                end = max( j end , end)
            else
                break
                (jth interval is more hence new list for vector interval)    

    add the start and end to ans

return ans


Code2

Sort the vector
Loop from 0 to n-1
    if ans is empty OR int[i][0] > ans.bac()[1]
        (checking if overlap)
        push both intervals into ans
    else
        ans.back()[1]=max( ans.back()[1] , int[1][1])


Here we choose either to create new interval or change last intervals end point. Hence merge the intervals.










