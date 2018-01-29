KATA 2.

A password is considered strong if below conditions are all met:

It has at least 6 characters and at most 20 characters.
It must contain at least one lowercase letter, at least one uppercase letter, and at least one digit.
It must NOT contain three repeating characters in a row ("...aaa..." is weak, but "...aa...a..." is strong, assuming other conditions are met).
Write a function strongPasswordChecker(s), that takes a string s as input, and return the MINIMUM change required to make s a strong password. 
If s is already strong, return 0.

Insertion, deletion or replace of any one character are all considered as one change.

int strongPasswordChecker(char* s) {    }

************************************************************************************************************************************************

BREAKDOWN.

 - We have the minimum (6) and maximum (20) amount of characters.
 - In the best scenario, we should return 0 because the password given is strong.
 - What should we do if for example the password given is a blank space?
 - Could we truncate the string given the case it has more than 20 chars?
 - We could reduce the lenght of the password if there are many repeated characters.

Possible Algorithm (context):
 - Keep a counter for each required action.
 - Do multiple validations to verify lenght of the word, uppercases, lowercases, digits and flags for each condition.
 - If a condition is not passed, then do the required actions until it passes, and counter++.
 - By the end, return counter value.

 Analize:
 - The complexity of this algorithm will vary according to the required actions.
 - If the password is already strong, we will have an order of O(n), because in any way, we would have to iterate through the array at least once.
 - Replace will be of order O(1).
 - Insertion and deletion will be of order O(n).
 - I shall be sure that my validations are correct.
 - Use ASCII code table values.
