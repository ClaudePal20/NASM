#include <stdio.h>
#include <stdlib.h>
#include<C:/Users/User/Desktop/practicas programacion estructurada/organizacion practica 13/sumaMatrices.asm>
#define WIDTH 4
#define HEIGHT 4
extern void sumaMatrices(int[WIDTH][HEIGHT],int[WIDTH][HEIGHT],int[WIDTH][HEIGHT],int largo,int ancho);
int main(){
    int matriz1[WIDTH][HEIGHT];
    int matriz2[WIDTH][HEIGHT];
    int matriz3[WIDTH][HEIGHT];
    for(int i=0;i<WIDTH;i++){
        for(int j=0;j<WIDTH;j++){
            matriz1[i][j]=rand()%100;
            matriz2[i][j]=rand()%100;
        }
    }
    sumaMatrices(matriz1,matriz2,matriz3,WIDTH,HEIGHT);
    return 0;
}
