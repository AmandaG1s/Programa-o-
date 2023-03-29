#include <stdio.h>
/*. Escreva um programa que leia as coordenadas x e y de pontos no R
2 e calcule sua distância
da origem (0, 0).*/
int main()
{ 
    float y = 0;
    float x = 0;
    float R = 0;
    
    
    printf ("Digite a coordenada x \n");
    scanf ("%f", &x);
    printf ("Digite a coordenada y \n");
    scanf ("%f", &y);
    R=sqrt(pow(x,2)+pow(y,2)); 
    printf("A distancia e: %f \n", R);
    
    return 0;
}
