#include <stdio.h>


int main() {
	
	int segundos_total, horas, minutos, segundos_resto;
	
	scanf("%d", &segundos_total);
	
	horas = segundos_total / 3600;
	segundos_resto = segundos_total % 3600;
	
	minutos = segundos_resto /60;
	segundos_resto = segundos_resto %60;
	
	printf("%d:%d:%d\n", horas, minutos, segundos_resto);
	

	return 0;
}