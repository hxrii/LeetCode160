1. Find the index where A[i+1]>A[i] from reverse;
2. if index was never found, reverse the entire array and return (MAX case)
3. if index found  
            swap the index with first bigger element from array in reverse
            then reverse the array from index + 1 to end
            return