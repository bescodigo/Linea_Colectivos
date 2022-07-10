#include <stdio.h>
#include <stdlib.h>
#include "bescodigo\\beslib.h"
#include "funcionesColectivos.h"

int main(int argc, char *argv[]) {


	int parada=0;
	char barrio='-';
	int vparada[50]={};
	char vbarrio[50]={};
	
	int contador=0;
	
	int opcion=0;
	
	while(opcion!=3){
		
		menu(&opcion);
		
		if(opcion==1){
			ingresarDatos(&contador, &parada, &barrio, vparada,vbarrio);
			int i=0;
			while(*(vparada+i)!=0){
				printf("parada: %i\tbarrio: %c\n",*(vparada+i),*(vbarrio+i));
				i++;
			}
			
		}else if(opcion==2){
			informarLinea(&contador, vparada, vbarrio);
			
		}else if(opcion==3){
			//	Salir.
			
		}else{
			printf("\nerror, ingreso: %i\n", opcion);
			pauseClear();
		}
		
		
		
	}
	
	

	return 0;
}
















