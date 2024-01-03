//objetivo: HPC que lea un vector de 20 enteros y al final muestre el promedio de los mismos.
//autor: luis carlos cortez guzman
//fecha: 29/3/22

#include <stdio.h>

int main(){
	int v[20],i;
	float promedio;
	//titulo
	printf("programa para calcular el promedio de 20 numeros\n");
	printf("*numeros enteros*\n");
	//leer
	for(i=0;i<=19;i++){
		printf("teclea un valor: \n");
	   	scanf("%d",&v[i]);
	}
	//promediar
	promedio= v[0] +  v[1] +  v[2] +  v[3] +  v[4] +  v[5] +  v[6] +  v[7] +  v[8] +  v[9] +  v[10] +  v[11] +  v[12] +  v[13] +  v[14] +  v[15] +  v[16] +  v[17] +  v[18] +  v[19];
	promedio = promedio / 20;
	//imprimir
	printf("el promedio de los 20 valores es: %f",promedio);
}
