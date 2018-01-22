KATA #01
Rosa M Ramirez M
A01700857

Given two lists A and B, and B is an anagram of A. B is an anagram of A means B is made by randomizing the order of the elements in A.
We want to find an index mapping P, from A to B. A mapping P[i] = j means the ith element in A appears in B at index j.
These lists A and B may contain duplicates. If there are multiple answers, output any of them.
For example, given
A = [12, 28, 46, 32, 50]  B = [50, 12, 32, 46, 28]  
We should return
[1, 4, 3, 2, 0]  
as  P[0] = 1 because the  0th element of  A appears at  B[1], and  P[1] = 4 because the  1st element of  A appears at  B[4], and so on.

Note:
    A, B have equal lengths in range [1, 100].
    A[i], B[i] are integers in range [0, 10^5].

Observaciones iniciales:
- Puede haber una o varias posibles soluciones.
- Las listas contienen únicamente enteros.
- Los números pueden repetirse.
- La lista B contiene el mismo número de elementos que A, pero no en el mismo orden.
- Los elementos no están ordenados.
- La lista resultante tendrá el mismo tamaño que A o B.

Breakdown - posible algoritmo:
- La primer opción: buscar por cada elemento en A, el mismo en B, y guardar el índice en el arreglo resultante.
- Ordenar los elementos no es opción a considerar, porque debemos tomar en cuenta los índices.

Análisis:
- El algoritmo parece fácil de implementar pero no es eficiente, con una complejidad de n^2 en el peor de los casos.

¿Lo puedo mejorar?
- Otra opción es manejar una estructura tipo hash para cada una de las listas, relacionando el índice con su elemento.
- Sería más eficiente que el anterior, porque no recorro la totalidad de la lista en cada búsqueda (en el peor de los casos), reduciendo la complejidad del algoritmo.
- Será más difícil de implementar.