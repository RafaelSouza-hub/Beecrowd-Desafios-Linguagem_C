#include <stdio.h>


int main() {
	int idade_dias, anos, meses, dias_resto;
	
	scanf("%d", &idade_dias);
	
	anos = idade_dias / 365;
	dias_resto = idade_dias % 365;
	
	meses = dias_resto / 30;
	dias_resto = dias_resto % 30;
	
	printf("%d ano(s)\n", anos);
	printf("%d mes(es)\n", meses);
	printf("%d dia(s)\n", dias_resto);
	
	return 0;
}