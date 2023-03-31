#include <stdio.h>
#include <locale.h>

// Samuel Sales Souza
// 25/03

int main() {
	
	setlocale(LC_ALL, "Portuguese");
   	
	int n1, impar, par;
    
	printf("Escreva o primeiro numero: ");
	scanf("%d", &n1);
    
	if (n1 % 2 == 1) {
		printf("O numero digitado é um numero ÍMPAR");
	} else {
		printf("O numero digitado é um numero PAR");
	}
    return 0;
}
