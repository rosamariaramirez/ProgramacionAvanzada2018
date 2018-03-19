#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int W; // width of the building.
    int H; // height of the building.
    scanf("%d%d", &W, &H);
    int N; // maximum number of turns before game over.
    scanf("%d", &N);
    int X0;
    int Y0;
    scanf("%d%d", &X0, &Y0);

    // game loop
    while (1) {
        
        int Xi = 0, Xj = W;
        int Yi = 0, Yj = H;
        
        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        for(int i = 0; i < N; i++){
            // To debug: fprintf(stderr, "Debug messages...\n");
            //printf();
            
            char bombDir[4]; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
            scanf("%s", bombDir);
            
            //Console.Write("\n");
            
            if(!strcmp(bombDir, "U")){
                Yj = Y0;
                Y0 = Yi + (Yj - Yi) / 2;
            }else if(!strcmp(bombDir, "UR")){
                Yj = Y0;
                Y0 = Yi + (Yj - Yi) / 2;
                Xi = X0;
                X0 = Xi + (Xj - Xi) / 2;
            }else if(!strcmp(bombDir, "R")){
                Xi = X0;
                X0 = Xi + (Xj - Xi) / 2;
            }else if(!strcmp(bombDir, "DR")){
                Yi = Y0;
                Y0 = Yi + (Yj - Yi) / 2;
                Xi = X0;
                X0 = Xi + (Xj - Xi) / 2;
            }else if(!strcmp(bombDir, "D")){
                Yi = Y0;
                Y0 = Yi + (Yj - Yi) / 2;
            }else if(!strcmp(bombDir, "DL")){
                Yi = Y0;
                Y0 = Yi + (Yj - Yi) / 2;
                Xj = X0;
                X0 = Xi + (Xj - Xi) / 2;
            }else if(!strcmp(bombDir, "L")){
                Xj = X0;
                X0 = Xi + (Xj - Xi) / 2;
            }else if(!strcmp(bombDir, "UL")){
                Yj = Y0;
                Y0 = Yi + (Yj - Yi) / 2;
                Xj = X0;
                X0 = Xi + (Xj - Xi) / 2;
            }
            
            // the location of the next window Batman should jump to.
            printf("%d %d\n", X0, Y0);
        }
    }
    return 0;
}