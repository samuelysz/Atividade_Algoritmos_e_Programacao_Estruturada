#include <stdio.h>
#include <locale.h>

// Samuel Sales Souza
// 30/03


int main() {
	
	setlocale(LC_ALL, "Portuguese");

	int idade;
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	if (idade<0) {
		printf("N�o nasceu");
	}
	if (idade<16) {
		if (idade>-1) {
			printf("N�o vota");
		}
	}
	if (idade>15) {
		if (idade<18) {
			printf("Opcional");	
		}
	}
	if (idade>17) {
		if (idade<66) {
			if (idade==41) {
				printf("Somente ganha pr�mio e n�o vota!!!");
			} else {
				printf("Obrigat�rio");
			}
				
		}
	}
		if (idade>65) {
			if (idade==88) {
				printf("Somente ganha pr�mio e n�o vota!!!");
			} else {
				printf("Opcional");
			}
	}
	
    return 0;
}
