Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].


 Breakdown:
 - Is the input array ordered? No.
 - There is one and only one solution, always.
 - So, we have minimum 2 elements in the array.
 - Simpler case: returning index 0, 1.

Possible Algorithm (context):
 - Select item
 - I look for the rest (target - element)
 - Feed the program with the array of numbers, each one followed by space

 Analize:
 - Complexity, will it be worth it if I order it? could do binary search, with algorithm 1.

 Could I improve the algorithm?
 - In n time, is there any way?
 - Hash table? With the key and value being the indices and the elements.
 - I could use any of those two algorithms.
