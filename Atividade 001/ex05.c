#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Samuel Sales Souza
// 17/03

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int anos, meses, dias, totalDias;
	
	printf("Digite a idade em anos: ");
	scanf("%d", &anos);
	
	printf("Digite a idade em meses: ");
	scanf("%d", &meses);
	
	printf("Digite a idade em dias: ");
	scanf("%d", &dias);
	
	totalDias = (anos*365) + (meses*30) + dias;
	
	printf("Essa é sua idade em dias: %d", totalDias);
	
	return 0;
	
}
