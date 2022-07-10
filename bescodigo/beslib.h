
//	BESLIB.

//	Captura y retorna un entero.
int int_in(){
	printf("\nint: ");
	int value;
	scanf("%i",&value);
	fflush(stdin);
	return value;	
	
}

//	Captura y retorna un float.
int float_in(){
	printf("\nfloat: ");
	float value;
	scanf("%f",&value);
	fflush(stdin);
	return value;	
	
}

//	Captura y retorna un char.
int char_in(){
	printf("\nchar: ");
	char value;
	scanf("%c",&value);
	fflush(stdin);
	return value;	
	
}


//	Pausa y limpia consola.
void pauseClear(){
	system("pause");
	system("cls");
}



































