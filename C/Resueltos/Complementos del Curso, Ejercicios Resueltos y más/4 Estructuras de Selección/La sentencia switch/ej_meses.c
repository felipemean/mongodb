#include<stdio.h>
int main(){
	int numero;
	 
	printf("Digita un numero entre 1-12 correspondiente a un mes del agno:\n") ;
	
	scanf("%i", &numero);
	switch(numero){
		
		case 1: printf(" Corresponde al mes de ENERO\n"); break;
			case 2: printf(" Corresponde al mes de FEBRERO\n");break;
				case 3: printf(" Corresponde al mes de MARZO\n");break;
					case 4: printf(" Corresponde al mes de ABRIL\n");break;
						case 5: printf(" Corresponde al mes de MAYO\n");break;
							case 6: printf(" Corresponde al mes de JUNIO\n");break;
								case 7: printf(" Corresponde al mes de JULIO\n");break;
									case 8: printf(" Corresponde al mes de AGOSTO\n");break;
										case 9: printf(" Corresponde al mes de SEPTIEMBRE\n");break;
				case 10: printf(" Corresponde al mes de OCTUBRE\n");break;
					case 11: printf(" Corresponde al mes de NOVIEMBRE\n");break;
						case 12: printf(" Corresponde al mes de DICIEMBRE\n");break;
							default: printf(" INTRODUZCA EL NUMERO CORRECTO ENTRE   1 Y 12\n");
	}
	
	
	
	
	return 0;
}
