65. Valid Number

Validate if a given string is numeric.

Some examples:
"0" => true
" 0.1 " => true
"abc" => false
"1 a" => false
"2e10" => true

Note: It is intended for the problem statement to be ambiguous. You should gather all requirements up front before implementing one.

BREAKDOWN.
- We are asked to return a value: TRUE if string is numeric or FALSE if not.
- We know that commas ',' are allowed, so our program needs to check the right order.
- Commas are not allowed to the right of decimal dot.
- Only one dot is allowed. The exponential has to be an integer.
- If a blank space is found, the string is not accepted.
- A numeric string will accept numbers (0-9), one decimal dot (if any floating part), commas in the integer part of the number (if wanted), and letter 'e' for the exponential (if any).

POSSIBLE ALGORITHM.
- We can make a state machine:
1. Read the string.
2. Move to a different state according the character.
3. Determine acception or reject the string as a valid number.

- Current state is state 1.
while chars in string:
- if character == number, state = 1.
- if character == number, state = 1.
- if character == ., state = 2.
- if character == number, state = 3.
- if character == e, state = 4.
- if character == number, state = 5.
- if character == number, state = 5.

ANALYSIS.
- The complexity of this algorithm is O(n), because we need to iterate through all the characters of the given string.
