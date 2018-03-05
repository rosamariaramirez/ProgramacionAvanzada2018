KATA 5.

1. You want to build a word cloud, an infographic where the size of a word corresponds to how often it appears in the body of text.

To do this, you'll need data. Write code that takes a long string and builds its word cloud data in a hash table, where the keys are words and the values are the number of times the words occurred.
Think about capitalized words. For example, look at these sentences:

"After beating the eggs, Dana read the next step:"
"Add milk and eggs, then add flour and sugar."

What do we want to do with "After", "Dana", and "add"? In this example, your final hash table should include one "Add" or "add" with a value of 2.

2. Make reasonable (not necessarily perfect) decisions about cases like "After" and "Dana". Assume the input will only contain words and standard punctuation.

BREAKDOWN
- We know that we have to transform all the string to uppercase or lowercase.
- We know the input will only contain words and standard punctuation (; , . ?).
- We don't know how the input is going to be read (from a file or user input). If we read input from a file, we will read it until EOF. Else, until '\0'.
- All words have an initial value of one (because they appeared at least once).
- We need to do a hash table or dictionary in order to have the value of every word assigned to it.
- We could have an array of "trash words" that include prepositions and other non-significant words, and do a cleaning of the sentences. But the problem does not specify if we can dismiss some words.

POSSIBLE ALGORITHM
- We receive the "long string" as input and we save it in a char array.
- We can use the function strtok( char * str, const char * delimiters ) from C string library, which divide or tokenize a string according to given characters (space, coma, dot).
- In order to do this, we might create a struct of a vector in which we could add or remove words.
- we make a while loop to save these tokens into another array, checking if the array repeats with the function strstr().
- If strstr returns a value, counter of word++. And remove that string, repeating the search until no value is returned.

ANALYSIS
- This algorithm will be likely of order O(n^2) + n = O(n^2), because we are nesting 2 loops.