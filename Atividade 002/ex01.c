#include <stdio.h>
#include <locale.h>

// Samuel Sales Souza
// 25/03

int main() {
	
	setlocale(LC_ALL, "Portuguese");
   	
	float n1, n2, maior;
    
	printf("Escreva o primeiro numero: ");
	scanf ("%f", &n1);
	
	printf("Escreva o segundo numero: ");
	scanf ("%f", &n2);
    
    if (n2<n1) {
    	maior=n1;
	} else {
		maior=n2;
	}
	
	printf("O maior numero entre os dois é: %0.2f", maior);
    
    return 0;
}
