Kata 9: Inflight entertainment system

You've built an inflight entertainment system with on-demand movie streaming.

Users on longer flights like to start a second movie right when their first one ends, but they complain that the plane usually lands before they can see the ending. So you're building a feature for choosing two movies whose total runtimes will equal the exact flight length.

Write a function that takes an integer flight_length (in minutes) and a list of integers movie_lengths (in minutes) and returns a boolean indicating whether there are two numbers in movie_lengths whose sum equals flight_length.

When building your function:

Assume your users will watch exactly two movies
Don't make your users watch the same movie twice
Optimize for runtime over memory

BREAKDOWN:

- We have an integer and an array as input (we could use scanf to get it).
- We have a boolean as output.
- The problem does not specify if the data is read from a file or through arguments.
- If we find 2 numbers in the array that by adding one to each other we obtain the exact flight length, return true.
- Else, return false.
- We know that the numbers have to be located in different indices of the array.
- The problem does not specify the length of the array.
- We may have more than one sum that exactly fits the flight length, but we need only one to return true.

ALGORITHM AND ANALYSIS:
- A naive approach will be to search trough all the array, element by element, verifying the sum of each number with all the others.
- We also could order the array, and avoid looping trough all of it by doing a binary search.
- In the worst case, this would be of O(n^2) because we loop the array twice.
- To improve memory usage, we could implement a hash table where the indices are the difference between flight length and movie length.
- With a hash table we would reduce the amount of operations, and thus less values will be saved in memory. 
- With hash table we will also improve the time of execution, O(n) in the worst case.
- Here we can see an implementation of hash table in C: https://gist.github.com/tonious/1377667