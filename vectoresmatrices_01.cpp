//objetivo: HPC que lea un vector de 15 elementos enteros y despu�s los imprima en pantalla.
//autor: luis carlos cortez guzman
//fecha: 29/3/22

#include <stdio.h>

int main(){
	int v[15],i;
	
	//leer
	for(i=0;i<=14;i++){
		printf("teclea un valor: ");
	   	scanf("%d",&v[i]);
	}
    //imprimir 
    for(i=0;i<=14;i++){
		printf("\n valor= %d",v[i]);
	}
}
