Shadows of the Knight - Episode 1
Link: https://www.codingame.com/training/medium/shadows-of-the-knight-episode-1

BREAKDOWN

Before each jump, the heat-signature device will provide Batman with the direction of the bombs based on Batman current position: 
U (Up)
UR (Up-Right)
R (Right)
DR (Down-Right)
D (Down)
DL (Down-Left)
L (Left)
UL (Up-Left)

Your mission is to program the device so that it indicates the location of the next window Batman should jump to in order to reach the bombs' room as soon as possible.

Buildings are represented as a rectangular array of windows, the window in the top left corner of the building is at index (0,0).

POSIBLE ALGORITMO
Binary search, en el problema se menciona que es un enfoque parecido a la búsqueda binaria, sin embargo la ubicación de la bomba no es dada, por lo tanto más que búsqueda binaria, tenemos que seguir un procedimiento parecido al método de bisección.

- Tendremos 2 índices para indicar los límites verticales (yi, yj).
- Tendremos 2 índices para indicar los límites horizontales (xi, xj).
- Sabemos que al inicio de cada ciclo, vamos a recibir un input que nos indica la dirección hacia la cual se moverá batman.
- Asumimos que habrá llegado a la bomba cuando no reciba ningún input de dirección.
- Tendremos un ciclo para verificar que batman no dará más saltos de los especificados en N.

ANALISIS
- Tendremos una complejidad de O(N) en el peor de los casos, ya que la cantidad de ciclos dependerá de la cantidad de saltos permitidos.
- Tendremos una complejidad de O(1) en el mejor de los casos, ya que podremos encontrar la ubicación de la bomba en una cantidad constante.