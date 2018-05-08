PROBLEM

Level Of Difference: https://www.codechef.com/problems/TASTR
How to measure the difference between two strings? This is a midnight question of biological scientists. The number of pairs of different characters in the same position may be a good indicator. However, it will not work well in the case when two strings have different lengths. The longest common subsequence will also fail when strings are too long.

Recently, Professor of Math L.P.C. has invented the special method to deal with this problem. His invention has been known as a simple but creative solution: the difference is based on the number of substrings (a non-empty group of consecutive characters) of one string that are not substrings of the other string.

Let's learn about his invention. Call the first string as A and the second string as B. Let S be the set of all different substrings of A, and T be the set of all different substrings of B. We then define another set P which consists of all the strings that belongs to S or T, but not both. According to the Professor L.P.C. method, the size of P is a good indicator to measure the difference between A and B.

For example, let A = aacd and B = cdaa. We can see that:
S = {a, aa, aac, aacd, ac, acd, c, cd, d},
T = {c, cd, cda, cdaa, d, da, daa, a, aa},
P = {aac, aacd, ac, acd, cda, cdaa, da, daa}.
Size of P is 8 and we can say the level of difference between A and B is 8. 

Your task is to find this indicator.


BREAKDOWN

- We know the constraints of the problem:
1 ≤ |A| ≤ 100000, where |A| denotes the length of the string A
1 ≤ |B| ≤ 100000
Both A and B consist only of lowercase English letters (from 'a' to 'z')

- Store A and B in a char array
- Store S, T, P in char array
- S and T are all possible combinations of characters in A and B
- P contains the strings that are unique in S or T
- Return as output the number of strings in P

ANALYSIS

- We need to get possible combinations from 1 to N - 1 characters in A for filling S.
- We need to get possible combinations from 1 to N - 1 characters in B for filling T.
- Create array of substrings for each (A and B):
    - From 1 to N, we must iterate with a 3 for nested loops.
    - The first loop chooses starting character
    - The second loop considers all characters on right of the choosed character as ending of the substring.
    - The third loop saves characters from currently choosen character as starting point until the loop reaches the ending point.
    - By this way we will have all substrings inside A or B. We can start a counter inside these loops, in order to know how many substrings are.
- Finally, we should implement a final for loop for each S and T.
- The range of the loop will be the size of the minor array (S or T).
- Compare if the given substring in the minor array exists in the other.
- If so, add the string to P, and ResultCounter++.
- The output will be the ResultCounter.
-As we have 3 nested for loops from 0 to N plus another for loop from 0 to N, this solution will have a complexity of O(n^3) + n.

ANOTHER POSSIBLE IMPLEMENTATION

- In order to improve the complexity of the algorithm, we could find another way to find the combination of characters.
- As we saw in the previous project, we can implement a binary mask to obtain all the possible combinations of the entire string A or B.
- The number of combinations will be (2^n), being n the size of A or B.
- In that case, we should implement a for loop for all the binary numbers from 0 to 2^n and add it to the original string.
- By doing this, the 3 for nested loops will become one, and the complexity would be n + n + n + n, meaning 4n = O(n).