//objetivo: HPC que lea un vector de 18 enteros e identefique cual es el elemento mayor y cual es el elemento menor.
//autor: luis carlos cortez guzman
//fecha: 22/4/22

#include <stdio.h>

int main(){
	int v[18],i,ma,me;
	//titulo
	printf("PROGRAMA PARA ENCONTRAR EL MAYOR Y MENOR DE UN VECTOR \n");
	//leer vector
	for(i=0;i<=17;i++){
     	printf("teclea un valor: ");
   	    scanf("%d",&v[i]);
	}
	//encontrar mayor y menor
	for(i=0;i<=17;i++){
	    if(i==0){
	        ma = v[0];
        	me = v[0];
		}
		else{
			if (v[i]>ma) ma = v[i];
			if (v[i]<me) me = v[i];
		}
	}
	//imprimir el mayor y el menor
	printf("el numero mayor es: %d \n",ma);
	printf("el numero menor es: %d",me);
}
