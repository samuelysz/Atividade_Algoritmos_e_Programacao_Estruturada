#include <stdio.h>
#include <locale.h>

// Samuel Sales Souza
// 25/03

int main() {
	
	setlocale(LC_ALL, "Portuguese");
   	
	float n1, n2;
    
	printf("Escreva o primeiro numero: ");
	scanf("%f", &n1);
	
	printf("Escreva o segundo numero: ");
	scanf("%f", &n2);
    
	if (n2>n1) {
		printf("O maior número entre os dois é: %0.2f", n2);
	} else if (n2<n1) {
		printf("O maior número entre os dois é: %0.2f", n1);
	} else {
		printf("Números iguais");
	}
    
    return 0;
}
