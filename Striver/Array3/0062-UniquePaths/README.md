1.

Use Recursion to find all paths

path-finder(i,j,n,m,dp)
    if i>=n || j >=m
        return 0;
    if i==n-1 and j == m-1
        return 1;

    if dp[i][j] != -1
        return dp[i][j]    

    return dp[i][j] = pathfinder ( i+1 , j ) +      
                      pathfinder( i , j+1 )   



main
      dp[n][m] = (m,vector<int>(n,-1))
      pathfinder(0,0,n,m,dp)   


2. Intution

    Total steps = n-1  +  m-1
    Total down steps = n-1
    Total right steps = m-1

    Hence combination
    NCr

    where N = n + m -2
    and r = m-1

    
