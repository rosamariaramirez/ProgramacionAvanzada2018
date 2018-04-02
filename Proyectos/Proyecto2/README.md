https://code.google.com/codejam/contest/11254486/dashboard#s=p1

Problem
You are attending the most important game in sports history. The Oceania Coders are playing the Eurasia Jammers in the Centrifugal Bumble-Puppy world finals. Unfortunately, you were sleep deprived from all the anticipation, so you fell asleep during the game!

The scoreboard is currently displaying both scores, perhaps with one or more leading zeroes (because the scoreboard displays a fixed number of digits). While you were asleep, some of the lights on the scoreboard were damaged by strong ball hits, so one or more of the digits in one or both scores are not being displayed.

You think close games are more exciting, and you would like to imagine that the scores are as close as possible. Can you fill in all of the missing digits in a way that minimizes the absolute difference between the scores? If there is more than one way to attain the minimum absolute difference, choose the way that minimizes the Coders' score. If there is more than one way to attain the minimum absolute difference while also minimizing the Coders' score, choose the way that minimizes the Jammers' score.

Input
The first line of the input gives the number of test cases, T. T cases follow. Each case consists of one line with two non-empty strings C and J of the same length, composed only of decimal digits and question marks, representing the score as you see it for the Coders and the Jammers, respectively. There will be at least one question mark in each test case.

Output
For each test case, output one line containing Case #x: c j, where x is the test case number (starting from 1), c is C with the question marks replaced by digits, and j is J with the question marks replaced by digits, such that the absolute difference between the integers represented by c and j is minimized. If there are multiple solutions with the same absolute difference, use the one in which c is minimized; if there are multiple solutions with the same absolute difference and the same value of c, use the one in which j is minimized.

Limits
1 ≤ T ≤ 200.
C and J have the same length.
Small dataset
1 ≤ the length of C and J ≤ 3.

Large dataset
1 ≤ the length of C and J ≤ 18.

Sample

Input 
 	
Output 
 
4
1? 2?
?2? ??3
? ?
?5 ?0

Case #1: 19 20
Case #2: 023 023
Case #3: 0 0
Case #4: 05 00
In sample case #4, note that the answer cannot be 15 10; that minimizes the absolute difference, but does not minimize the Coders' score. Nor can the answer be 05 10; that minimizes the absolute difference and the Coders' score, but does not minimize the Jammers' score.


BREAKDOWN

In the problem we have the following assumptions:
- Program always receive 2 strings of same size per case.
- User specifies cases, maximum 200 and minimum 1.
- Program should return the strings substituing '?' per digits.
- The output strings should be with the minimum difference between each other, and the minimum quantity.
- In small dataset, the size of string is maximum 3. In large dataset, 18. This means that we should allocate a different size of memory in each.

POSSIBLE ALGORITHM

- Read input string.
- Get number of cases.
- Get both indices (for first and second number).
- First index = 0.
- Second index = strln(inputString) / 2 + 1, because both numbers have the same lenght.
- While first index != ' ', compare first and second indices.
- There are 4 possible combinations while this loop:
- If first != '?' && second != '?' 
    - if none of the elements are '?', we cannot modify the string.
- If first != '?' && second == '?' 
- If first == '?' && second != '?'
    - If one element is '?' and the other is not, then we shuld verify:
        - Are there digits before?
            - Case yes:
                - If first > second, first = 0 and second = 9. We do this because in order to obtain the minimum difference, the smallest number has to obtain the gratest possible digit.
                - If second > first, first = 9 and second = 0.
                - Else, first = second = 0.
            - Case no: first = second.
- If first == '?' && second == '?'
        - Are there digits before?
            - Case yes:
                - If first > second, first = 0 and second = 9.
                - If second > first, first = 9 and second = 0.
                - Else, first = second = 0.
            - Case no: first = second = 0.
- Return string.  

ANALYSIS

- This algorithm requires one while loop per case, and a while loop when comparing strings.
- A constant number of processes occur during these loops, so the order of it is O(n^2).