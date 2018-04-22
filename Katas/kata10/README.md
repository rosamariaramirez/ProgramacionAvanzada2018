22/04/2018
Rosa María Ramírez Moreno
A01700857


main.c receives a string of max 1000 integers separated by space, representing our array of data.


Kata 10: 393. UTF-8 Validation
A character in UTF8 can be from 1 to 4 bytes long, subjected to the following rules:

For 1-byte character, the first bit is a 0, followed by its unicode code.
For n-bytes character, the first n-bits are all one's, the n+1 bit is 0, followed by n-1 bytes with most significant 2 bits being 10.

This is how the UTF-8 encoding would work:

   Char. number range  |        UTF-8 octet sequence        (hexadecimal)    |              (binary)     --------------------+---------------------------------------------     0000 0000-0000 007F | 0xxxxxxx     0000 0080-0000 07FF | 110xxxxx 10xxxxxx     0000 0800-0000 FFFF | 1110xxxx 10xxxxxx 10xxxxxx     0001 0000-0010 FFFF | 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx  

Given an array of integers representing the data, return whether it is a valid utf-8 encoding.

Note:
The input is an array of integers. Only the least significant 8 bits of each integer is used to store the data. This means each integer represents only 1 byte of data.

Example 1:

data = [197, 130, 1], which represents the octet sequence: 11000101 10000010 00000001.    Return true.  It is a valid utf-8 encoding for a 2-bytes character followed by a 1-byte character.  
Example 2:

data = [235, 140, 4], which represented the octet sequence: 11101011 10001100 00000100.    Return false.  The first 3 bits are all one's and the 4th bit is 0 means it is a 3-bytes character.  The next byte is a continuation byte which starts with 10 and that's correct.  But the second continuation byte does not start with 10, so it is invalid.


BREAKDOWN
- The problem does not say if we read data from file or a stream.
- We know a character is maximum 4 bytes long, meaning 4 octets of bits, or 4 integers of our array.
- We know that we'll receive an array of integers as an input, used to represent characters in utf-8 encoding.
- We need to do a function that tell us if a given array is a utf-8 encoding.
- AS we only use the least significant 8 bits of each character, each integer of our array is 8 bits long (from 0 - 255).
- We have to return true if our integers follow the rules of utf-8, and false if not.
- The problem does nots says a limit of integers in the array, so I will stablish 1000 as my limit.
- If the binary octet representing the integer starts with zero, we follow to the next integer.
- If the binary octet representing the integer starts with 1's, the number of ones ("N") represents the number of octets (integers in the array) representing the character, so
    - The next "N-1" octets have to start with binary 10.. .... in order to be valid.
- If at the end of the array we have a number that not completes a character, it is not a valid encoding, so return false.
- Otherwise, return true.

ANALYSIS AND POSSIBLE ALGORITHM
- We need a loop to iterate through the array.
Integers in binary form that
- starting with zero: 0 -> 127
- starting with 10: 128 -> 191
- starting with 1's: 192 -> 223 need 1 auxiliar octet
- 224 -> 239 need 2 auxiliar
- 240 -> 247 need 3 auxiliar
- inside our loop, we will have if comparisons, checking in which range is our integer.
- We verify if it needs an auxiliar octet, and verify that the octet is there.
- if the number of auxiliars is zero by the end, we return true. Else, we return false.

- The complexity of the algorithm is O(n) because we need to iterate through all the array, but the operations inside are O(1).