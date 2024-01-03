//objetivo: hpc que lea una matriz de 4*2 elementos enteros y después los imprima en pantalla.
//autor: luis carlos cortez guzman
//fecha: 29/3/22

#include <stdio.h>

int main(){
	int v[4][2],fila,columna;
	
	//leer
	for(fila=0;fila<=3;fila++){
			for(columna=0;columna<=1;columna++){
				printf("teclea un valor: ");
	        	scanf("%d",&v[fila][columna]);
			}
    }
    //leer la matriz
    for(fila=0;fila<=3;fila++){
			for(columna=0;columna<=1;columna++){
				printf("\n valor= %d",v[fila][columna]);
			}
   	}
}
