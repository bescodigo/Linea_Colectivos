

void menu(int *opcion){
	
	printf("\n----------------- MENU -----------------");
	printf("\n1 - Ingresar datos de la linea de colectivo.");
	printf("\n2 - Consultas de la informacion sobre la linea de colectivos.");
	printf("\n3 - Salir.");
	
	*opcion=int_in();
	
	system("cls");
	
}





void menuParadas(int *parada){
	
	printf("\nIngrese parada");
	printf("\nParada:   | Barrio:");
	printf("\nde 1 a 3  | 'l' Liniers");
	printf("\nde 4 a 5  | 'f' Flores");
	printf("\nde 6 a 7  | 'c' Caballito");
	printf("\nde 8 a 10 | 'p' Palermo\n");
	
	*parada = int_in();
	
}


char verificarParada(int *contador,int *parada, char *barrio, int *vparada, char *vbarrio){
	
	switch(*parada){
		case 1:
		case 2:
		case 3:
			*barrio = 'l';
			*(vparada+*contador)=*parada;
			*(vbarrio+*contador)=*barrio;
		
			break;
		case 4:
		case 5:
			*barrio = 'f';
			*(vparada+*contador)=*parada;
			*(vbarrio+*contador)=*barrio;
		
			break;
		case 6:
		case 7:
			*barrio = 'c';
			*(vparada+*contador)=*parada;
			*(vbarrio+*contador)=*barrio;
		
			break;
		case 8:
		case 9:
		case 10:
			*barrio = 'p';
			*(vparada+*contador)=*parada;
			*(vbarrio+*contador)=*barrio;
		
			break;
	}
	*contador+=1;
	
}


void ingresarDatos(int *contador, int *parada, char *barrio, int *vparada, char *vbarrio){
	menuParadas(parada);
	verificarParada(contador, parada, barrio,vparada,vbarrio);
	
}


void informarLinea(int *contador, int *vparada, char *vbarrio){
	
	//	Contadoras.
	int liniers=0;
	int flores=0;
	int caballito=0;
	int palermo=0;
	int i=0;
	//	Contar segun barrio.
	while(*(vparada+i)!=0){
		
		if(*(vbarrio+i)=='l'){
			liniers+=1;
		}else if(*(vbarrio+i)=='f'){
			flores+=1;
		}else if(*(vbarrio+i)=='c'){
			caballito+=1;
		}else if(*(vbarrio+i)=='p'){
			palermo+=1;
		}
		
		i++;
	}
	
	printf("\nliniers: %i paradas.",liniers);
	printf("\nflores: %i paradas.",flores);
	printf("\ncaballito: %i paradas.",caballito);
	printf("\npalermo: %i paradas.",palermo);
	
	//	Verificar si la linea pasa por un solo barrio.
	if(liniers>0&&flores==0&&caballito==0&&palermo==0){
		printf("\ntodas las paradas de la linea son en el barrio de liniers.");
	}else if( flores>0&&liniers==0&&caballito==0&&palermo==0){
		printf("\ntodas las paradas de la linea son en el barrio de flores.");
	}else if(  caballito>0&&liniers==0&&flores==0&&palermo==0){
		printf("\ntodas las paradas de la linea son en el barrio de caballito.");
	}else if(palermo >0&&liniers==0&&flores==0&&caballito==0){
		printf("\ntodas las paradas de la linea son en el barrio de palermo.");
	}
	
	
	//	Verificar cabecera/terminal.
	if(*vparada == *(vparada+*contador-1)){
		printf("\nla linea comienza y finaliza su recorrido en el mismo barrio: %c",*(vbarrio+*contador-1));
	}
	
	
}




































