Kata 3: 657. Judge Route Circle

Initially, there is a Robot at position (0, 0). Given a sequence of its moves, judge if this robot makes a circle, which means it moves back to the original place.
The move sequence is represented by a string. And each move is represent by a character. The valid robot moves are R (Right), L(Left), U (Up) and D (down). The output should be true or false representing whether the robot makes a circle.

Example 1:
Input: "UD"  Output: true  
Example 2:
Input: "LL"  Output: false  

************************************************************************************************************************************************

BREAKDOWN.

 - La única manera de que el programa regrese true, es que la última posición del robot sea el mismo punto en el que inició.
 - Cada caracter recibido en la cadena de input, pertenece a una dirección.
 - Se entiende que avanza la misma distancia hacia cualquiera de las direcciones.
 - Para que regrese al mismo punto, por cada movimiento debe existir su contrario, esto es: U <-> D, R <-> L
 - No especifica el tamaño máximo o mínimo de la cadena.

Possible Algorithm (context):
 - Leer la cadena de input
 - Si la cadena es un número impar de caracteres, return false
 - Llevar un contador por cada letra que aparezca.
 - si U == D && R == L, return true.
 - else, return false.

Analize complexity:
 - O(n), es necesario recorrer todo el arreglo de caracteres.
