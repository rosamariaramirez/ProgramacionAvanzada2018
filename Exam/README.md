You are given an integer N, followed by N lines of input (1 <= N <= 100). Each line of input contains one or several words separated with single spaces. Each word is a sequence of letters of English alphabet containing between 1 and 10 characters, inclusive. The total number of words in the input is between 1 and 100, inclusive.

Your task is to reverse the order of words in each line of input, while preserving the words themselves. The lines of your output should not have any trailing or leading spaces.

Example

input
3
Hello World
Bye World
Useless World

output
World Hello
World Bye
World Useless

BREAKDOWN:

- Recibo numero de casos
- Para cada uno, recibo string y lo almaceno en Char* input
- Crear char* output, que será el reverse string.
- crear 3 variables: lastIndex = inputSize - 1, firstIndex = 0, sizeOfWord = 0.
- Comienzo a leer mi string input desde lastIndex, e iré decrementando el mismo hasta encontrar un ' '.
- si el caracter leido es ' ', firstIndex = lastIndex + 1.
- Si no, incrementar el sizeOfWord.
- por cada espacio encontrado, concatenar los caracteres de input[firstIndex] en el char* output, utilizando el sizeOfWord.
- repetir el proceso hasta que lastIndex == 0.

ANALYSIS:
- Para esta solucion, se necesitan 2 char arrays de tamaño MAX, por lo tanto podría mejorarse utilizando punteros en el mismo array, y quizá una variable auxiliar que guarde los caracteres que están por cambiarse.
- O(N) ya que estamos utilizando un ciclo para recorrer el input, y otro para almacenar las palabras en el output, pero ninguno de ellos está anidado.
