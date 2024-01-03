//objetivo: HPC que lea una matriz de 4*4 enteros y obtenga la sumatoria de los elementos de la diagonal principal.
//autor: luis carlos cortez guzman
//fecha: 29/3/22

#include <stdio.h>

int main(){
	int m[4][4],fila,columna,dp;
	//titulo
	printf("PROGRAMA QUE SUMA LA DIAGONAL PRINCIPAL DE LA MATRIZ \n");
	//leer la matriz
	for(fila=0;fila<=3;fila++){
		for(columna=0;columna<=3;columna++){
			printf("teclea un valor: ");
        	scanf("%d",&m[fila][columna]);
		}
    }
    //optener la dp
    dp = m[0][0] + m[1][1] +m[2][2] +m[3][3]; 
    //resultado
    printf("la sumatoria de la diagonal principal es: %d",dp);
}
