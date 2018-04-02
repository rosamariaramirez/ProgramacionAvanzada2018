ROSA MARIA RAMIREZ MORENO
A01700857
12-02-18

1118. Nontrivial Numbers
Time limit: 2.0 second
Memory limit: 64 MB
Specialists of SKB Kontur have developed a unique cryptographic algorithm for needs of information protection while transmitting data over the Internet. The main advantage of the algorithm is that you needn't use big numbers as keys; you may easily do with natural numbers not exceeding a million. However, in order to strengthen endurance of the cryptographic system it is recommended to use special numbers - those that psychologically seem least "natural". We introduce a notion of triviality in order to define and emphasize those numbers.
Triviality of a natural number N is the ratio of the sum of all its proper divisors to the number itself. Thus, for example, triviality of the natural number 10 is equal to 0.8 = (1 + 2 + 5) / 10 and triviality of the number 20 is equal to 1.1 = (1 + 2 + 4 + 5 + 10) / 20. Recall that a proper divisor of a natural number is the divisor that is strictly less than the number.
Thus, it is recommended to use as nontrivial numbers as possible in the cryptographic protection system of SKB Kontur. You are to write a program that will find the less trivial number in a given range.

Input
The only line contains two integers I and J, 1 ≤ I ≤ J ≤ 106, separated with a space.

Output
Output the only integer N satisfying the following conditions:
I ≤ N ≤ J;
N is the least trivial number among the ones that obey the first condition.

Sample:
input	output
24 28   25

Problem Author: Leonid Volkov
Problem Source: USU Open Collegiate Programming Contest October'2001 Junior 

----------------------------------------------------------------------------------

BREAKDOWN:
- We receive 2 integers as input: I, J.
- We have the limit for those values: 1 <= I <= J <= 1000000.
- The data type possibly will be "long".
- As output we return 1 integer N: I <= N <= J, which is the least trivial number in the range.
- We can follow TDD approach, for the range 24 28, the result is 25.
- We need the algorithm for finding non-trivial numbers.

POSSIBLE ALGORITHM:
- The ratio of the sum of all proper divisors with the number.
- We know that proper divisors are integers smaller than the number.
- If (number % divisor == 0), the divisor is a proper one.
- We need 2 arrays: numbersInGivenRange and IndicesOfTriviality.
- First, we fill the numbersInGivenRange array with the numbers beggining with I, and ending with J (could be with a while loop).
- Inside that same while loop, we get the triviality index (should make a separated function with the algorithm), and assign it to the other array (IndicesOfTriviality).
- We could create a variable which saves this triviality index inside the loop, and if (nextIndex < currentIndex) then currentIndex = nextIndex.
- Then, we should print numbersInGivenRange[currentIndex], that is our result.

ANALIZE:
- For the trivial index algorithm, we have to iterate (while loop) n times and perform module operation in each iteration. Then add if % == 0, and finally divide between n.
- In our code we are using 2 while loops (nested). So our complexity is O(n^2).

IMPROVE:
- We need to add verifications at the beginning of our program to check that both I and J are greater than 0, and that I <= J.
- We need only 1 array, not two. We really don't need to save all the indices of triviality, only the smallest. If we delete our IndicesOfTriviality array, we save memory.
- In other case, we could implement a data structure: Dictionary, with key and value (number, trivialityIndex).
- We could start the algorithm for triviality from number 2, since 1 is proper divisor of all numbers.